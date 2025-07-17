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
const unsigned int M = 1e9 + 7;
const int N = 2e5 + 5;

ll n, k, sz, ans = 0;
bool vis[N];
vector<ll> g[N];

ll binpow(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void dfs(ll u) {
    if (vis[u]) return;
    vis[u] = true;
    sz++;
    for (auto v : g[u])
        dfs(v);
}

int main() {
    fast;
    cin >> n >> k;
    ans = binpow(n, k, M);
    rep1(i, 1, n - 1) {
        ll u, v, x;
        cin >> u >> v >> x;
        if (x == 0) {
            g[u].pb(v);
            g[v].pb(u);
        }
    }

    rep1(i, 1, n) {
        if (!vis[i]) {
            sz = 0;
            dfs(i);
            ans = (ans - binpow(sz, k, M) + M) % M;
        }
    }

    cout << ans nl;
    return 0;
}
