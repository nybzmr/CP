#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

  int t ;
  cin >> t;
  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> v[i];
    }
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
      pre[i] = pre[i - 1] + v[i];
    }
    int ans = b * pre[n];
    for (int i = 1; i <= n; i++)
    {
      int curr = b * v[i] + a * v[i] + b * (pre[n] - pre[i]) - b * (n - i) * v[i];
      ans = min(ans, curr);
    }
    cout << ans << endl;
  }
  return 0;
}
