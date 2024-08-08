#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string ans;
        cin>>ans;
        int na=0,nb=0,nc=0,nd=0,nq=0;
        for (int i = 0; i < 4*n; i++)
        {
          if (ans[i]=='A')
          {
            na++;
          }
          
          else if (ans[i]=='B')
          {
            nb++;
          }
          
          else if (ans[i]=='C')
          {
            nc++;
          }
          
          else if (ans[i]=='D')
          {
            nd++;
          }
          
          else{
            nq++;
          }
        }
        if (na>=n)
        {
          na=n;
        }
        
        if (nb>=n)
        {
          nb=n;
        }
        
        if (nc>=n)
        {
          nc=n;
        }
        
        if (nd>=n)
        {
          nd=n;
        }
        cout<<na+nb+nc+nd<<endl;
        
    }
    return 0;
}