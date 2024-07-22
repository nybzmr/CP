#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x, n;
        cin>>n >>x;
        int gain=0;
        int loss=0;
        if (x==n)
        {
          for (int i = 1; i <= x; i++)
          {
            gain+=pow(2,i);
          }
          
        }
        else
        {
          int y= n-x;
          for (int i = 1; i <= y; i++)
          {
            loss+=pow(2,i);
          }
          for (int i = n; i >y; i--)
          {
            gain+=pow(2,i);
          }
          
        }
        
        cout<< gain- loss<< endl;
    }
    return 0;
}