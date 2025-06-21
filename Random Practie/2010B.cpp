// Author: Nayaab Zameer 
#include <bits/stdc++.h>
using namespace std;

int main(){

vector<int>v(2);
   for (int i = 0; i < 2; i++)
   {
    int input;
    cin>>input;
    v[i]=input;
   }
   sort(v.begin(),v.end());
   if (v[0]!=1)
   {
    cout<<1<<endl;
   }
   else if(v[1]!=2){
    cout<<2<<endl;
   }
   else{
    cout<<3<<endl;
   }
return 0;
}
