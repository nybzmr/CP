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
#define inputllv                    \
  for (long long i = 0; i < n; i++) \
    cin >> v[i];
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

void fun(ll n,ll ind , vector<ll> &v, vector<ll> &temp, ll s, ll sum = 0)
{
  // Base case
  if (ind==n&&sum == s)
  {
      cout << '[';
      fr(temp.size())
      {
        i==temp.size()-1?cout << temp[i] :cout << temp[i] << ' ';
      }
      cout << ']' nl;
      return;
  }
  if (ind == n || sum > s)
  {
    return;
  }
  temp.pb(v[ind]);
  fun(n,ind+1,v,temp,s, sum+v[ind]);
  temp.pop_back();
  fun(n,ind+1,v, temp, s, sum);
}

int main()
{
  fast;
  ll n, s;
  cin >> n >> s;
  makellv v(n);
  inputllv;
  vector<ll> temp;
  fun(n, 0, v, temp, s);
  return 0;
}
