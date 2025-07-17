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

bool check(vector<pair<int, int>>& seg, int k) {
    int ll = 0, rr = 0;
    for (auto& e : seg) {
        ll = max(ll - k, e.ff);
        rr = min(rr + k, e.ss);
        if (ll > rr) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> seg(n);
    fr(n) cin >> seg[i].ff >> seg[i].ss;

    int l = -1, r = 1e9;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        if (check(seg, mid)) r = mid;
        else l = mid;
    }
    cout << r nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
