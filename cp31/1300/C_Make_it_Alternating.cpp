// Author: Nayaab Zameer
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 998244353
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
const int MOD = 998244353;

void upd(int &a, int b) {
    a = (1LL * a * b) % MOD;
}

void solve() {
    string s;
    cin >> s;
    int res = 1;
    int k = s.size();
    int n = s.size();

    for (int l = 0; l < n; ) {
        int r = l + 1;
        while (r < n && s[l] == s[r]) ++r;
        upd(res, r - l);
        --k;
        l = r;
    }

    rep1(i, 1, k) {
        upd(res, i);
    }

    cout << k << " " << res nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
