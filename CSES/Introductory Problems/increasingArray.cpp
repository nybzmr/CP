#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    long long int count=0;
    for (int i = 0; i < n-1; i++)
    {
      if (arr[i]>arr[i+1])
      {
        count += arr[i]-arr[i+1];
        arr[i+1]=arr[i];
      }
        
    }
    
    cout<<count<<endl;
    return 0;
}