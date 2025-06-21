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

int main() {
    fast;
    ll T = 1;
    cin >> T;
    while (T--) {
        int n;
        ll k;
        cin >> n >> k;

        string s;
        cin >> s;


        makellv a(n);
        fr(n) cin >> a[i];

        const ll NEG = -1000000000000000LL;

        makellv dpL(n, 0), dpR(n, 0);

        fr(n) {
            if (s[i] == '1') {
                ll prev = (i > 0 ? dpL[i-1] : 0);
                dpL[i] = max(0LL, prev + a[i]);
            }
        }
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '1') {
                ll nxt = (i+1 < n ? dpR[i+1] : 0);
                dpR[i] = max(0LL, nxt + a[i]);
            }
        }

        ll knownMax = 0;
        fr(n) knownMax = max(knownMax, dpL[i]);

        if (knownMax > k) {
            cout << "No\n";
            continue;
        }

        if (knownMax == k) {
            cout << "Yes\n";
            fr(n) {
                if (s[i] == '1') cout << a[i] << " ";
                else           cout << NEG   << " ";
            }
            cout << "\n";
            continue;
        }

        int pickIdx = -1;
        ll pickVal = 0;
        fr(n) {
            if (s[i] == '0') {
                ll L = (i > 0 ? dpL[i-1] : 0);
                ll R = (i+1 < n ? dpR[i+1] : 0);
                pickIdx = i;
                pickVal = k - L - R;
                break;
            }
        }

        if (pickIdx < 0) {
            cout << "No\n";
            continue;
        }

        cout << "Yes\n";
        fr(n) {
            if (s[i] == '1') {
                cout << a[i] << " ";
            }
            else if (i == pickIdx) {
                cout << pickVal << " ";
            }
            else {
                cout << NEG << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
