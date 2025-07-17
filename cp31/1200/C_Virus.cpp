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
const int N = 5e5 + 5;
const int inf = INT_MAX;

int n, m, a[N];

struct Gap {
    int x, y;
};

Gap t[N];

int main() {
    fast;
    int T;
    cin >> T;
    while(T--) {
        int k = 0;
        cin >> n >> m;
        rep1(i, 1, m) cin >> a[i];
        sort(a + 1, a + m + 1);

        rep1(i, 2, m) {
            t[++k] = {a[i] - a[i - 1] - 1, 2};
        }

        int wrapAroundGap = a[1] + n - a[m] - 1;
        if(wrapAroundGap > 0) {
            t[++k] = {wrapAroundGap, 2};
        }

        sort(t + 1, t + k + 1, [](Gap a, Gap b) {
            return a.x > b.x;
        });

        ll ans = 0, cnt = 0;
        rep1(i, 1, k) {
            if(t[i].x - cnt * 2 > 0) {
                ll safe = max(1ll, t[i].x - cnt * 2 - 1);
                ans += safe;
            }
            cnt += 2;
        }

        cout << n - ans nl;
    }
    return 0;
}
