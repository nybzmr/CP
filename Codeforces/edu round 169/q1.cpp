#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
          int input;
          cin>>input;
          v.push_back(input);
        }
        if (v.size()==2&&max(v[0],v[1])-min(v[0],v[1])>1)
        {
          cout<<"YES"<<endl;
        }
        
        else{
          cout<<"NO"<<endl;
        }
    }
    return 0;
}