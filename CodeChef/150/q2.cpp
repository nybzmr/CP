#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        cin>>x>>y;
        if (x>=2*y||y>=2*x)
        {
          cout<<0<<endl;
          continue;
        }
        if (x==y)
        {
          if (x%2 ==0)
          {
            cout<<x/2<<endl;
          }
          else{
            cout<<x/2+1<<endl;
          }
          continue;
        }
        int big = max(x,y);
        int small = min(x,y);
        int d1 = abs(small*2-big);
        int d2 = abs(small - big/2);
        d1>d2?cout<<d2<<endl:cout<<d1<<endl;
    }

    return 0;
}