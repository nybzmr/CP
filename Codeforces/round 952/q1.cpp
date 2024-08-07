#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
      string a,b;
        cin>>a>>b;
        swap(a.front(),b.front());
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}