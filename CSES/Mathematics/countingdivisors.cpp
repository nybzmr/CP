#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int div=0;
        for (int i = 1; i <= n; i++)
        {
          if (n%i==0)
          {
            div++;
          }
          
        }
        cout<<div<<endl;
        }
    return 0;
}