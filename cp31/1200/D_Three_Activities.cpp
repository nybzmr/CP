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

makellv get_best3(const makellv& a) {
    ll mx1 = -1, mx2 = -1, mx3 = -1;
    fr(a.size()) {
        if (mx1 == -1 || a[i] > a[mx1]) {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 || a[i] > a[mx2]) {
            mx3 = mx2;
            mx2 = i;
        }
        else if (mx3 == -1 || a[i] > a[mx3]) {
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}

int main(){
    fast;
    ll t=1;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        makellv a(n), b(n), c(n);
        fr(n) cin >> a[i];
        fr(n) cin >> b[i];
        fr(n) cin >> c[i];
        
        makellv best_a = get_best3(a);
        makellv best_b = get_best3(b);
        makellv best_c = get_best3(c);
        
        ll ans = 0;
        for (ll x : best_a) {
            for (ll y : best_b) {
                for (ll z : best_c) {
                    if (x != y && x != z && y != z) {
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout << ans nl;
    }
    return 0;
}