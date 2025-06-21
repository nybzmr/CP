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
const int  N = 2e5 + 5 ; 
int main(){
    fast
 
    ll t; 
    cin >> t;
    while(t--){
        int n, k; 
        ll x;
        cin >> n >> k >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        ll S = 0;
        for (int i = 0; i < n; i++){
            S += a[i];
        }
        vector< ll > p(n);
        p[0] = 0;
        for (int j = 1; j < n; j++){
            p[j] = p[j-1] + a[j-1];
        }
 
        ll ans = 0;
        for (int b = 0; b < k; b++){
            ll T = S * ( (ll)k - b ) - x;
            int cnt = upper_bound(p.begin(), p.end(), T) - p.begin();
            ans += cnt;
        }
 
        cout << ans nl;
    }
    return 0;
}

