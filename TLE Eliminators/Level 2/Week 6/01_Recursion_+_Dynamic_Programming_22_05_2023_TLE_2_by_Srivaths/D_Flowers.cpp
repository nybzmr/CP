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
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                  \
   for (long long i = 0; i < x; i++) \
      for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

ll dp[N], prefix[N];
ll k;

ll countWays(ll n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];

    return dp[n] = (countWays(n - 1) + countWays(n - k)) % mod;
}

int main() {
    fast;
    int t;
    cin >> t >> k;

    memset(dp, -1, sizeof(dp));
    prefix[0] = dp[0];
    for (int i = 1; i < N; i++) {
        prefix[i] = (prefix[i - 1] + countWays(i)) % mod;
    }

    while (t--) {
        int a, b;
        cin >> a >> b;
        ll ans = (prefix[b] - (a > 0 ? prefix[a - 1] : 0)+ mod) % mod;
        cout << ans << "\n";
    }

    return 0;
}


