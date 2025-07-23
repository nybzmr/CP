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
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                 \
  for (long long i = 0; i < x; i++) \
    for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;


signed main()
{
  fast;
  ll n, k;
  cin >> n >> k;
  vector<ll> divs;
  bool fg=false;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      divs.pb(i);
    }
    if(i*i==n) fg=true;
  }

  // for (int i = divs.size() - 1; i >= 0; i--)
  // {
  //   divs.pb(n / divs[i]);
  // }
  
  if(fg){
    if(k>=2*divs.size()){
      cout<<-1;
      return 0;
    }
  }
  else{
    if(k>2*divs.size()){
      cout<<-1;
      return 0;
    }
  }
  if (k<=divs.size())
  {
    cout<<divs[k-1];
  }
  else{
    ll x=k-divs.size();
    ll y =divs.size();
    int ct=y-x;
    if(fg) ct--;
    cout << n/divs[ct];
  }  
  return 0;
}
