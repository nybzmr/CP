#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define int long long


signed main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t = 1;
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
    sort(all(v));
    int i = 0, j = n - 1;
    int combo = 0, op = 0;
    while (i < j)
    {
      int needed = v[j] - combo;
      if (v[i] > needed)
      {
        v[i] -= needed;
        j--;
        combo = 0;
        op += needed + 1;
      }
      else if (v[i] == needed)
      {
        op += needed + 1;
        i++;
        j--;

        combo = 0;
      }
      else
      {
        combo += v[i];
        op += v[i];
        i++;
      }
    }

    if (i == j)
    {
      v[i] -= combo;
      if (combo != 0)
        op++;
      op += (v[i] + 1) / 2;
    }
    cout << op << endl;
  }
  return 0;
}
