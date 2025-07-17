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

ll query(int l, int r, vector<ll> &p)
{
  return p[r] - (l ? p[l - 1] : 0);
}

void solve()
{
  int n, s;
  cin >> n >> s;
  vector<ll> a(n), p(n);
  fr(n)
  {
    cin >> a[i];
    p[i] = a[i];
    if (i)
      p[i] += p[i - 1];
  }

  ll ans = LLONG_MAX;

  fr(n)
  {
    int l = i, r = n - 1, pos = -1;
    while (l <= r)
    {
      int mid = (l + r) >> 1;
      if (query(i, mid, p) <= s)
      {
        pos = mid;
        l = mid + 1;
      }
      else
      {
        r = mid - 1;
      }
    }
    if (pos == -1 || query(i, pos, p) != s)
      continue;
    ans = min(ans, ll(n - (pos - i + 1)));
  }

  cout << (ans == LLONG_MAX ? -1 : ans) nl;

  cout << (ans == INT_MAX ? -1 : ans) nl;
}

int main()
{
  fast;
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
