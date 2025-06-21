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
  ll t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool> hasA(n + 1, false), hasB(n + 1, false);
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'A')
        hasA[i + 1] = true;
      else
        hasB[i + 1] = true;
    }

    bool awins = false;
    for (int i = 1; i <= n; i++)
    {
      if (!hasA[i])
        continue;
      bool safe = true;
      if (i == 1)
      {
        for (int j = 2; j <= n - 1; j++)
        {
          if (hasB[j])
          {
            safe = false;
            break;
          }
        }
      }
      else if (i == n)
      {
        if (hasB[1])
          safe = false;
      }
      else
      {
        for (int j = i + 1; j <= n; j++)
        {
          if (hasB[j])
          {
            safe = false;
            break;
          }
        }
      }
      if (safe)
      {
        awins = true;
        break;
      }
    }

    cout << (awins ? "Alice" : "Bob") << '\n';
  }
  return 0;
}
