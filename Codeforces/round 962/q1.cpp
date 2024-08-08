#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int ans=0;
        if (n%4==0)
        {
          ans=n/4;
        }
        else{
          ans=n/4+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}