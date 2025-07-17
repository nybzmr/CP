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
const int N = 3e5 + 10;

vector<int> e[N], seq;
priority_queue<int, vector<int>, greater<int>> pq;
bool vis[N];
int n, m;

int main() {
    fast;
    cin >> n >> m;
    rep1(i, 1, m) {
        int u, v;
        cin >> u >> v;
        e[u].pb(v);
        e[v].pb(u);
    }

    vis[1] = true;
    pq.push(1);

    while (!pq.empty()) {
        int u = pq.top(); pq.pop();
        seq.pb(u);
        for (auto v : e[u]) {
            if (!vis[v]) {
                vis[v] = true;
                pq.push(v);
            }
        }
    }

    for (auto x : seq) cout << x << " ";
    cout nl;
    return 0;
}
