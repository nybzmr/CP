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

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> cnt(31, 0), a(n);
    fr(n) {
        cin >> a[i];
        rfr(31) {
            if (a[i] & (1 << i)) cnt[i]++;
        }
    }

    int ans = 0;
    rfr(31) {
        int need = n - cnt[i];
        if (need <= k) {
            k -= need;
            ans += (1 << i);
        }
    }
    cout << ans nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
