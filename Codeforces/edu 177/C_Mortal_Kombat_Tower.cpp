#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define f(i, n) for (long long i = 1; i < n; i++)

signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
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
    int ans = 0;
    if(v[0]==1) ans++; 
    f(i, n)
    {
      if(v[i]==0) continue;
      int j=i;
      while(j<n && v[j]==1){
        j++;
      }
      ans+=(j-i)/3;
      i=j-1;
    }
    cout<<ans<<endl;
  }
  return 0;
}
