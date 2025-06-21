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
const int MAXK = 400000;
const int SIEVE_LIM = 6200000;
vector<bool> isPrime(SIEVE_LIM + 1, true);
vector<int> primes;
primes.reserve(MAXK);
isPrime[0] = isPrime[1] = false;
for (int i = 2; i <= SIEVE_LIM && (int)primes.size() < MAXK; i++) {
    if (isPrime[i]) {
        primes.pb(i);
        if ((ll)i * i <= SIEVE_LIM) {
            for (ll j = (ll)i * i; j <= SIEVE_LIM; j += i)
                isPrime[j] = false;
        }
    }
}
makellv P(primes.size() + 1, 0);
for (int i = 1; i <= (int)primes.size(); i++)
    P[i] = P[i - 1] + primes[i - 1];

ll t=1;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   vector<ll>v(n);
   fr(n){
    cin>>v[i];
   }
   sort(v.begin(),v.end(),greater<ll>());
   vector<ll> S(n+1,0);
   for(int i=1;i<=n;i++)
    S[i]=S[i-1]+v[i-1];
   int best=0;
   for(int k=1;k<=n;k++){
    if(S[k]>=P[k])
    best=k;
   }
   cout<<(n-best) nl;
}
return 0;
}
