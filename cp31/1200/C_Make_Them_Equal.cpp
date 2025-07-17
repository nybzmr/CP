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
const ll INF = 1e9 + 7;
const ll MOD = 998244353;
const int N = 2e5 + 5;

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;

        vector<int> ans;
        bool allSame = true;
        for (char x : s) {
            if (x != c) {
                allSame = false;
                break;
            }
        }

        if (!allSame) {
            rep1(i, 1, n) {
                bool ok = true;
                for (int j = i; j <= n; j += i) {
                    if (s[j - 1] != c) {
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    ans.pb(i);
                    break;
                }
            }
            if (ans.empty()) {
                ans.pb(n);
                ans.pb(n - 1);
            }
        }

        cout << ans.size() nl;
        for (auto x : ans) cout << x << " ";
        cout nl;
    }
    return 0;
}
