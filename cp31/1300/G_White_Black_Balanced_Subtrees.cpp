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
    int n;
    cin >> n;
    vector<int> child[n + 7];

    rep1(i, 2, n) {
        int x;
        cin >> x;
        child[x].pb(i);
    }

    string s;
    cin >> s;
    int res = 0;

    function<int(int)> dfs = [&](int x) {
        int bal = (s[x - 1] == 'B') ? -1 : 1;
        for (int i : child[x]) bal += dfs(i);
        if (bal == 0) res++;
        return bal;
    };

    dfs(1);
    cout << res nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
