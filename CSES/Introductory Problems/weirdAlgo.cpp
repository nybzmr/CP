#include <bits/stdc++.h>
using namespace std;

vector<long long int>v;
int main() {
    long long int n;
    cin >> n;
    v.push_back(n);
    while (n!=1)
    {
      if (n%2==0)
      {
        n/=2;
        v.push_back(n);
      }
      else{
        n=n*3+1;
        v.push_back(n);
      }
    }
    for (int i = 0; i < v.size(); i++)
    {
      cout<< v[i]<<" ";
    }
    
    
    return 0;
}