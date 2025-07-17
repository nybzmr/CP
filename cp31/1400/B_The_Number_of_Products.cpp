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
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 13 ;

int n;
int a[N];

void read(){
    cin >> n;
    fr(n) cin >> a[i];
}

void solve(){
    int pos = -1;
    ll ans0 = 0;
    fr(n){
        if(a[i] == 0) pos = i;
        if(pos != -1) ans0 += pos + 1;
    }

    int cnt1 = 0, cnt2 = 0, bal = 0;
    ll ansP = 0;
    fr(n){
        if(a[i] == 0){
            cnt1 = cnt2 = bal = 0;
            continue;
        }
        if(bal % 2 == 0) cnt1++;
        else cnt2++;
        if(a[i] < 0) bal++;
        if(bal % 2 == 0) ansP += cnt1;
        else ansP += cnt2;
    }

    cout << n * 1ll * (n + 1) / 2 - ans0 - ansP << " " << ansP nl;
}

int main(){
    fast;
    read();
    solve();
    return 0;
}
