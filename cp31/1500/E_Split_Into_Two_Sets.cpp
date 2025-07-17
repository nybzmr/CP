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
const int N = 2e5 + 5;

map<int, vector<int>> m;
vector<bool> used;

int go(int v){
    used[v] = true;
    for(auto now : m[v]){
        if(!used[now]){
            return go(now) + 1;
        }
    }
    return 1;
}

void solve(){
    int n, x, y;
    cin >> n;
    m.clear();
    used.clear();
    used.resize(n + 1, false);

    bool fault = false;
    fr(n){
        cin >> x >> y;
        m[x].pb(y);
        m[y].pb(x);
        if(x == y || m[x].size() > 2 || m[y].size() > 2) fault = true;
    }

    if(fault){
        cout << "NO" nl;
        return;
    }

    fr(n){
        if(!used[i + 1]){
            if(go(i + 1) % 2){
                cout << "NO" nl;
                return;
            }
        }
    }

    cout << "YES" nl;
}

int main(){
    fast;
    int tests;
    cin >> tests;
    while(tests--) solve();
    return 0;
}
