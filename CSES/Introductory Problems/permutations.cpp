#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    if (n==1)
    {
      cout<<1<<endl;
    }
    
    else if (n>1&&n<=3)
    {
      cout<< "NO SOLUTION"<<endl;
    }
    else
    {
      if (n%2!=0)
      {
        int i = 1;
        cout<< n/2+1<<" ";
        while (i<=n/2)
        {
          cout<<i<<" "<<n-i+1<<" ";
          i++;
        } 
      }
      else{
        int i=1;
        cout<<n/2<<" "<<n<<" ";
        while (i<n/2)
        {
          cout<<i<<" "<<n-i<<" ";
          i++;
        } 
      }
      
    }
    
    
    return 0;
}