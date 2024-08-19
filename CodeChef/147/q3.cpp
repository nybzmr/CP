#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin>> m >> n;
        if (n<=m)
        {
          cout<<-1<<endl;
          continue;
        }
        cout<<2m+1<<endl;
        
    }
    return 0;
}