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
const int N = 2e5 + 5;

ll get(ll x) {
    return x * (x + 1) / 2;
}

void solve() {
    ll k, x;
    cin >> k >> x;
    ll l = 1, r = 2 * k - 1, res = 2 * k - 1;

    while (l <= r) {
        ll mid = (l + r) / 2;
        bool ok;
        if (mid >= k) {
            ll full = get(k) + get(k - 1);
            ll remove = get(2 * k - 1 - mid);
            ok = (full - remove >= x);
        } else {
            ok = (get(mid) >= x);
        }

        if (ok) {
            res = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << res nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
