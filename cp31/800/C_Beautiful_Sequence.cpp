#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 998244353

ll add(ll a, ll b) { return (a + b) % MOD; }

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    vector<vector<ll> > dp(n + 1, vector<ll>(4, 0));

    for (ll i = n - 1; i >= 0; i--) {
        for (ll typ = 1; typ <= 3; typ++) {
            dp[i][typ] = dp[i + 1][typ]; // Skip element

            if (typ == 1 && a[i] == 1) {
                dp[i][typ] = add(dp[i][typ], dp[i + 1][2]); // Move to typ 2
            }
            if (typ == 2 && a[i] == 2) {
                dp[i][typ] = add(dp[i][typ], dp[i + 1][2]); // Stay at typ 2
                dp[i][typ] = add(dp[i][typ], dp[i + 1][3]); // Move to typ 3
            }
            if (typ == 3 && a[i] == 3) {
                dp[i][typ] = add(dp[i][typ], 1); // Found a valid sequence
            }
        }
    }

    cout << dp[0][1] << endl;
}
int main() {
          ll t;
          cin>>t;
          while(t--){
              solve();
          }
   
      return 0;    
}
