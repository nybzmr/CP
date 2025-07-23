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

int main() {
    fast;
    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        vector<ll> primes = {2, 3, 5, 7};
        auto count_good_numbers = [&](ll x) {
            ll bad = 0;
            rep(mask, 1, 1 << primes.size()) {
                ll product = 1;
                ll bits = __builtin_popcount(mask);
                fr(primes.size()) {
                    if (mask & (1 << i)) {
                        product *= primes[i];
                    }
                }
                if (product > x) continue;
                ll cnt = x / product;
                bad += (bits % 2 ? cnt : -cnt);
            }
            return x - bad;
        };
        ll ans = count_good_numbers(r) - count_good_numbers(l - 1);
        cout << ans nl;
    }
    return 0;
}