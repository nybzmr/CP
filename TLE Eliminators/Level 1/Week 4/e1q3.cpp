#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string t;
    for (int i = 0; i < s.size(); i+=2)
    {
      t+=s[i];
    }
    
    sort(t.begin(),t.end());
    for (int i = 0; i < t.size()-1; i++)
    {
      cout<<t[i]<<'+';
    }
    cout<<t.back();
    
    return 0;
}