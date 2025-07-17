// Author: Nayaab Zameer 
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int t, n;
vector<pair<int, int>> arr;
ll ans;
ordered_set st;

void solve(){
    cin >> n;
    arr.assign(n, {});
    for(auto &p : arr) cin >> p.ss >> p.ff;
    sort(all(arr));
    ans = 0;
    st.clear();
    for(auto p : arr){
        ans += st.size() - st.order_of_key(p.ss);
        st.insert(p.ss);
    }
    cout << ans nl;
}

int main(){
    fast;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
