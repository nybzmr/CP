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

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> segs(m);
    fr(m){
        int l, r;
        cin >> l >> r;
        l--;
        segs[i] = {l, r};
    }

    int q;
    cin >> q;
    vector<int> ord(q);
    fr(q){
        cin >> ord[i];
        ord[i]--;
    }

    int l = 0, r = q + 1;
    while(r - l > 1){
        int M = (l + r) / 2;
        vector<int> cur(n, 0);
        for(int i = 0; i < M; i++){
            cur[ord[i]] = 1;
        }

        vector<int> pr(n + 1, 0);
        fr(n) pr[i + 1] = pr[i] + cur[i];

        bool ok = false;
        for(auto [lo, hi] : segs){
            if(pr[hi] - pr[lo] > (hi - lo) / 2){
                ok = true;
                break;
            }
        }

        if(ok) r = M;
        else l = M;
    }

    if(r == q + 1) r = -1;
    cout << r nl;
}

int main(){
    fast;
    int tc;
    cin >> tc;
    while(tc--) solve();
    return 0;
}
