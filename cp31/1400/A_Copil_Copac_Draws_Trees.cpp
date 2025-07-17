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
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

const int NMAX = 3e5 + 5;
int n, d[NMAX];
bool visited[NMAX];
vector<pair<int, int>> G[NMAX];

void dfs(int node, int t) {
    visited[node] = true;
    for (auto [u, idx] : G[node]) {
        if (!visited[u]) {
            d[u] = d[node] + (idx < t);
            dfs(u, idx);
        }
    }
}

void solve() {
    cin >> n;
    fr(n - 1) {
        int u, v;
        cin >> u >> v;
        G[u].pb({v, i + 1});
        G[v].pb({u, i + 1});
    }

    fill(visited + 1, visited + n + 1, false);
    d[1] = 0;
    dfs(1, n);

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, d[i]);
        G[i].clear(); // clear for next test case
    }

    cout << ans nl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}


