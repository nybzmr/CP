#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin>> n;
        long long int n2=0, n3=0;
        while (n%2==0)
        {
          n2++;
          n/=2;
        }
        while (n%3==0)
        {
          n3++;
          n/=3;
        }
        if (n>1 || n2>n3){
          cout<<-1<< endl;
        }
        else{
          int steps = 2*n3-n2;
          cout<< steps<< endl;
        }
        
    }
    return 0;
}