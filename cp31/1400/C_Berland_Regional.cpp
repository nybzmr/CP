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

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n), u(n);
        fr(n){
            cin >> s[i];
            s[i]--;
        }
        fr(n) cin >> u[i];
        vector<vector<int>> bst(n);
        fr(n) bst[s[i]].pb(u[i]);
        fr(n) sort(all(bst[i]), greater<int>());
        vector<vector<ll>> pr(n, vector<ll>(1, 0));
        fr(n){
            for(int x : bst[i])
                pr[i].pb(pr[i].back() + x);
        }
        vector<ll> ans(n);
        fr(n){
            for(int k = 1; k <= int(bst[i].size()); ++k){
                int len = int(bst[i].size());
                ans[k - 1] += pr[i][len / k * k];
            }
        }
        fr(n) cout << ans[i] << " ";
        cout nl;
    }
    return 0;
}
