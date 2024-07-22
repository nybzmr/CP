#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int r, c, ans=0;
        cin >> r>> c;
        if (r>c)
        {
          ans = (r-1)*(r-1);
          if (r%2==0)
          {
            ans=ans+2*r-c;
          }
          else{
            ans+=c;
          }
          
        }
        else
        {
          ans = (c-1)*(c-1);
          if (c%2==0)
          {
            ans=ans+r;
          }
          else{
            ans= ans+2*c-r;
          }
          
        }
        cout<< ans<<endl;
        
    }
    return 0;
}