#include <bits/stdc++.h>
using namespace std;
int Sum(int x, int n){
  int sumofx=0;
  int i=1;
  while (i*x<=n)
  {
    sumofx+=x*i;
    i++;
  }
  
  return sumofx;
  
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int max = 0;
        int x =0;
        for (int i = 2; i <= n; i++)
        {
          int current = Sum(i,n);
          if (current>max)
          {
            max=current;
            x=i;
          }
          // cout<<i<<" "<<current<<endl;

          continue;
        }
        cout<<x<<endl;
        
    }
    return 0;
}