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

vector<ll> super_lucky;
void generate_super_lucky(int length)
{
  int half=length/2;
  for (int mask = 0; mask < 1<<length; mask++)
  {
    if (__builtin_popcount(mask)!=half)
    {
      continue;
    }
    string s="";
    for (int i = 0; i < length; i++)
    {
      int x= mask>>i&1;
      if(x) s+='4';
      else s+='7';
    }
    super_lucky.push_back(stoll(s));
  }
  
}

int main()
{
  fast;
  ll n;
  cin >> n;
  for (int len = 2; len <= 10; len += 2)
  {
    generate_super_lucky(len);
  }
  sort(super_lucky.begin(), super_lucky.end());

  for (ll num : super_lucky)
  {
    if (num >= n)
    {
      cout << num << endl;
      return 0;
    }
  }

  return 0;
}
