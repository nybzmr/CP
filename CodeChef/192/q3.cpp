// Author: Nayaab Zameer
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a,b,c) min(c, min(a,b))
#define min4(a,b,c,d) min(d, min(c, min(a,b)))
#define rfr(n) for(int i=(n)-1;i>=0;--i)
#define rep1(i,a,b) for(long long i=(a);i<=(b);++i)
#define fr(n) for(long long i=0;i<(n);++i)
#define nesfr(x,y) for(long long i=0;i<(x);++i) for(long long j=0;j<(y);++j)
#define rep(i,a,b) for(long long i=(a);i<(b);++i)
#define fast ios::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
typedef vector<ll> vll;
#define nl << "\n"

int main(){
    fast;
    ll T; cin>>T;
    while(T--){
        ll n; cin>>n;
        vll arr(n+1);
        rep(i,1,n+1) cin>>arr[i];

        vector<int> pref(n+1);
        ll lb = 0;
        rep(i,1,n+1){
            pref[i] = (pref[i-1] + arr[i]) % 3;
            if(pref[i]==0) lb = i;
        }
        if(pref[n]==0){
            cout<<"No" nl;
            continue;
        }
        if(lb==0){
            cout<<"Yes" nl;
            continue;
        }
        array<bool,3> used = {false,false,false};
        bool can = false;
        rep(i,1,n+1){
            int r = pref[i];
            if(i>lb && r!=0 && !used[r]){
                can = true;
                break;
            }
            used[r] = true;
        }
        cout<<(can?"Yes":"No") nl;
    }
    return 0;
}
