#include <bits/stdc++.h>
using namespace std;
bool canArrangeStrips(int a, int b, int c) {
    // Sort the strips in descending order to check the most frequent color
    int strips[] = {a, b, c};
    sort(strips, strips + 3);

    // The most frequent color should not exceed half the total number of strips + 1
    if (strips[2] <= (strips[0] + strips[1] + 1)) {
        return true;
    }
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b , c;
        cin>> a>>b>>c;
        bool flag = canArrangeStrips(a,b,c);
        if (flag)
        {
          cout<<"Yes"<<endl;
        }
        else{
          cout<<"No"<<endl;
        }
        

    }
    return 0;
}