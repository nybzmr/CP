#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
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
    vector<bool> flag(n + 2);

    flag[v[0] + 1] = 1;
    flag[v[0] - 1] = 1;
    bool f=false;
    for (int i = 1; i < n; i++)
    {
      if (flag[v[i]] == 1)
      {
        flag[v[i] + 1] = 1;
        flag[v[i] - 1] = 1;
        continue;
      }
      else{
        cout<<"NO"<<endl;
        f=true;
        break;
      }
    }
    if (!f)
    {
      cout<<"YES"<<endl;
    }
    
  }
  return 0;
}
