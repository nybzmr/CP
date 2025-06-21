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

int main()
{
  fast;
  ll t = 1;
  cin >> t;
  while (t--)
  {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    if (n >= 2)
    {
      for (int i = 1; i < n; i++)
      {
        if (max < v[i] - v[i - 1])
        {
          max = v[i]-v[i - 1];
        }
        continue;
      }
    }

    if (max < v[0] - 0)
    {
      max = v[0] - 0 ;
    }
    if (max < 2 * (x - v[n - 1]))
    {
      max = 2 * (x - v[n - 1]);
    }
    
    cout << max << endl;
  }
  return 0;
}
