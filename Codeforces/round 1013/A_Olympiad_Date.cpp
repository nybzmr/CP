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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt5 = 0;
    int i =0;
    while (i<n&&(cnt0 < 3 || cnt1 < 1 || cnt2 < 2 || cnt3 < 1 || cnt5 < 1))
    {
      if (v[i]==0)
      {
        cnt0++;
      }
      else if (v[i]==1)
      {
        cnt1++;
      }
      else if (v[i]==2)
      {
        cnt2++;
      }
      else if (v[i]==3)
      {
        cnt3++;
      }
      else if (v[i]==5)
      {
        cnt5++;
      }
      i++;
    }
    if (cnt0 < 3 || cnt1 < 1 || cnt2 < 2 || cnt3 < 1 || cnt5 < 1)
    {
      cout<<0 nl;
      continue;
    }
    
    cout<<i nl;
  }
  return 0;
}
