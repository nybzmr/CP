#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a1,b1,a2,b2;
        cin>>a1>>a2>>b1>>b2;
        int suWin=0;
        int currentSu = a1;
        int currentSl = b1;
        if (currentSu==a1 && currentSl==b1)
        {
          if (a1>b1&&a2>b2)
          {
            suWin++;
          }
          else if(a1==b1&&a2>b2){
            suWin++;
          }
          else if(a1>b1&&a2==b2){
            suWin++;
          }
        }
        currentSu = a2;
        currentSl = b1;
        if (currentSu == a2 && currentSl == b1)
        {
          if (a2>b1&&a1>b2)
          {
            suWin++;
          }
          else if(a2==b1&&a1>b2){
            suWin++;
          }
          else if(a2>b1&&a1==b2){
            suWin++;
          }
        }
        currentSu= a1;
        currentSl= b2;
        if (currentSu == a1 && currentSl == b2)
        {
          if (a1>b2&&a2>b1)
          {
            suWin++;
          }
          else if(a1==b2&&a2>b1){
            suWin++;
          }
          else if(a1>b2&&a2==b1){
            suWin++;
          }
        }
        currentSu= a2;
        currentSl= b2;
        if (currentSu == a2 && currentSl == b2)
        {
          if (a2>b2&&a1>b1)
          {
            suWin++;
          }
          else if(a2==b2&&a1>b1){
            suWin++;
          }
          else if(a2>b2&&a1==b1){
            suWin++;
          }
        }
        cout<<suWin<<endl;
        
    }
    return 0;
}
