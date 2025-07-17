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
#define fr(n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const int N = 2e5 + 5;
const int bits = 30;

int pref[N][bits], a[N];

void Buildprefix(int n) {
    fr(n) {
        rep(j, 0, bits) {
            pref[i + 1][j] = pref[i][j] + ((a[i] >> j) & 1);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    fr(n) cin >> a[i];

    Buildprefix(n);

    int q;
    cin >> q;
    while (q--) {
        int l, k;
        cin >> l >> k;

        if (a[l - 1] < k) {
            cout << -1 nl;
            continue;
        }

        int lo = l, hi = n, ans = l;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            int num = 0;
            rep(j, 0, bits) {
                if (pref[mid][j] - pref[l - 1][j] == mid - l + 1)
                    num += (1 << j);
            }

            if (num >= k) {
                ans = max(ans, mid);
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans nl;
    }
}

int32_t main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
