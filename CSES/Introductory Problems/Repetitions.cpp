#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int max=0;
    int counter= 1;
    if (s.size()==1)
    {
      cout<<1<<endl;
    }
    else{
      for (int i = 1; i < s.size(); i++)
      {
      if (s[i]==s[i-1])
      {
        counter++;
        if (counter>max)
        {
          max = counter;
        }
      }
      else if (s[i]!=s[i-1])
      {
        counter=1;
        if (counter>max)
        {
          max = counter;
        }
      }
    }
    cout<< max<<endl;
    }
    return 0;
}