#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string t;
    cin>>t;
    reverse(t.begin(),t.end());
    s==t?cout << "Yes"<<endl:cout<<"No"<<endl;      
    return 0;
}