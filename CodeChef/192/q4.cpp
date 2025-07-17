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
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

vector<ll> get_divs(ll n) {
    vector<ll> divs;
    if (n == 0) return divs;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divs.pb(i);
            if (i != n / i) {
                divs.pb(n / i);
            }
        }
    }
    return divs;
}

int main(){
fast;
ll t=1;
cin>>t;
while(t--)
{
    ll X, Y, Z, C;
    cin >> X >> Y >> Z >> C;

    if (X == Y) {
        cout << 0 << endl;
        continue;
    }

    ll cd = LLONG_MAX;

    vector<ll> divX = get_divs(X);
    for (ll d : divX) {
        if (d % Y == 0) {
            cd = min(cd, abs(d - Z) + C);
        }
    }

    vector<ll> divY = get_divs(Y);
    for (ll d : divY) {
        if (d % X == 0) {
            cd = min(cd, abs(d - Z) + C);
        }
    }

    cd = min(cd, abs(1 - Z) + abs(X - 1) + 2*C);
    cd = min(cd, abs(1 - Z) + abs(Y - 1) + 2*C);

    {
        ll g1 = gcd(X, Z);
        ll l1 = lcm(Y, Z);
        ll g2 = gcd(g1, Z);
        ll l2 = lcm(l1, Z);
        if (g2 == l2) {
            cd = min(cd, 2*C);
        }
    }

    {
        ll g1 = gcd(X, Z);
        ll l1 = lcm(Y, Z);
        ll a2 = lcm(g1, Z);
        ll b2 = gcd(l1, Z);
        if (a2 == b2) {
            cd = min(cd, 2*C);
        }
    }

    {
        ll l1 = lcm(X, Z);
        ll g1 = gcd(Y, Z);
        ll a2 = gcd(l1, Z);
        ll b2 = lcm(g1, Z);
        if (a2 == b2) {
            cd = min(cd, 2*C);
        }
    }

    {
        ll l1 = lcm(X, Z);
        ll g1 = gcd(Y, Z);
        ll a2 = lcm(l1, Z);
        ll b2 = gcd(g1, Z);
        if (a2 == b2) {
            cd = min(cd, 2*C);
        }
    }

    cout << cd << endl;
}
return 0;
}