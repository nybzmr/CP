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

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}

ll range_sum(ll l, ll r) {
    if(l > r) return 0;
    return (l + r) * (r - l + 1) / 2;
}

int main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--) {
        ll n, x, y;
        cin >> n >> x >> y;
        ll l = lcm(x, y);
        ll plus = n / x - n / l;
        ll minus = n / y - n / l;
        cout << range_sum(n - plus + 1, n) - range_sum(1, minus) nl;
    }
    return 0;
}
