#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
        cin >> n;
        long long int llmaker= 1;
        long long int sum = llmaker*n*(n+1)/2;
        if (sum%2!=0)
        {
          cout<< "NO"<< endl;
        }
        else{
          vector<int>v1;
          vector<int>v2;
          int sum1=0,sum2=0;
          for (int i = 1; i <= n; i++)
          {
            if (i%8==3||i%8==5||i%8==6||i%8==0)
            {
              sum2+=i;
              v2.push_back(i);
            }
            else{
              sum1+=i;
              v1.push_back(i);
            }
          }
          if (sum1!=sum2)
          {
            cout<<"NO"<<endl;
          }
          else{
            cout<<"Yes"<<endl<<v1.size()<<endl;
            for (int i = 0; i < v1.size(); i++)
            {
              cout<<v1[i]<<" ";
            }
            cout<<endl;
            cout<<v2.size()<<endl;
            for (int i = 0; i < v1.size(); i++)
            {
              cout<<v2[i]<<" ";
            }
            
          }
          
        }
    return 0;
}