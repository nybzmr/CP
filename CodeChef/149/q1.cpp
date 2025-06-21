#include <bits/stdc++.h>
using namespace std;
int main() {
    
    int tc;
    cin >> tc;
    while (tc--) {
        int a,b, x;
        cin>>a >>b>>x;
        if (a*b<=x*x)
        {
          cout<<0<<endl;

        }
        else{
          int c = max(a,b);
          c = 1;
          if (c*min(a,b)<=x*x)
          {
            cout<<1<<endl;
          }
          else{
            cout<<2<<endl;
          }
        }
        
        }

    return 0;
}