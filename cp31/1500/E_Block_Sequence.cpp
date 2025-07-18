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

void solve(){
    int n;
    cin >> n;
    vector<int> a(n), dp(n, n + 1);
    fr(n) cin >> a[i];

    auto get = [&](int pos) {
        if (pos > n) return n + 1;
        if (pos == n) return 0;
        return dp[pos];
    };

    dp[n - 1] = 1;
    for(int i = n - 2; i >= 0; --i){
        dp[i] = min(dp[i + 1] + 1, get(i + a[i] + 1));
    }
    cout << dp[0] nl;
}

int main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
