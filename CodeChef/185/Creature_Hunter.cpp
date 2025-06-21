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
#define nesfr(x, y)                 \
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

int main()
{
  fast;
  int t;
    cin >> t;
    while (t--) {
        int n;
        ll h;
        cin >> n >> h;

        ll best1 = 0, best2 = 0;
        for (int i = 0; i < n; i++) {
            ll s, d;
            cin >> s >> d;
            if (s == 1 && d > best1) best1 = d;
            if (s == 2 && d > best2) best2 = d;
        }

        if (best1 == 0 && best2 == 0) {
            cout << -1 nl;
            continue;
        }

        if (best1 == 0) {
            ll uses = (h + best2 - 1) / best2;
            cout << uses * 2 nl;
            continue;
        }

        if (best2 == 0) {
            ll uses = (h + best1 - 1) / best1;
            cout << uses nl;
            continue;
        }

        ll ans = LLONG_MAX;
        {
            ll u1 = (h + best1 - 1) / best1;
            ans = min(ans, u1);
        }

        if (best2 > 2 * best1) {
            ll j0 = (h + best2 - 1) / best2;
            for (ll dj = 0; dj <= 1; dj++) {
                ll j = max(0LL, j0 - dj);
                ll rem = h - j * best2;
                if (rem < 0) rem = 0;
                ll i1 = (rem + best1 - 1) / best1;
                ans = min(ans, j * 2 + i1);
            }
        }

        cout << ans nl;
    }
  return 0;
}
