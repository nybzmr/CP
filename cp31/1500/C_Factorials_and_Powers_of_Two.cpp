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
const ll MAXAI = 1000000000000ll;

int get_first_bit(ll n){
    return 63 - __builtin_clzll(n);
}

int get_bit_count(ll n){
    return __builtin_popcountll(n);
}

void solve(){
    ll n;
    cin >> n;

    vector<ll> fact;
    ll factorial = 6, number = 4;
    while(factorial <= MAXAI){
        fact.pb(factorial);
        factorial *= number;
        number++;
    }

    int sz = fact.size();
    vector<pair<ll, ll>> fact_sum(1 << sz);
    fact_sum[0] = {0, 0};

    for(int mask = 1; mask < (1 << sz); mask++){
        int bit = get_first_bit(mask);
        fact_sum[mask].ff = fact_sum[mask ^ (1 << bit)].ff + fact[bit];
        fact_sum[mask].ss = get_bit_count(mask);
    }

    ll res = get_bit_count(n);
    for(auto &p : fact_sum){
        if(p.ff <= n){
            res = min(res, p.ss + get_bit_count(n - p.ff));
        }
    }

    cout << res nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
