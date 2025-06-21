#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define f(i, n) for (long long i = 0; i < n; i++)

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    string s;
    cin >> n >> k >> s;
    int flag = 1;
    for (int i = 0; i < k; i++)
    {
      if (!flag)
        break;
      if (s[i] == '?')
      {
        for (int j = i + k; j < n; j += k)
        {
          if (s[j] != '?')
          {
            s[i] = s[j];
            break;
          }
        }
      }
      if (s[i] != '?')
      {
        for (int j = i + k; j < n; j += k)
        {
          if (s[j] == '?')
            s[j] = s[i];
          else if (s[j] != s[i])
            flag = 0;
        }
      }
    }
    if (!flag)
    {
      cout << "NO" << endl;
    }
    else
    {
      int zero = 0, one = 0;
      f(i, k)
      {
        if (s[i] == '0')
          zero++;
        if (s[i] == '1')
          one++;
      }
      if (zero <= k / 2 && one <= k / 2)
      {
        cout << "YES" << endl;
      }
      else
      {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
