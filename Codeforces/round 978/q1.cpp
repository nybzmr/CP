#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector<int> a(n);
        int totalPeople = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            totalPeople += a[i];
        }
        
        int totalPairs = 0;
        int singles = 0;
        for (int i = 0; i < n; i++) {
            totalPairs += a[i] / 2; 
            singles += a[i] % 2;     
        }
        int maxHappy = totalPairs * 2;  
        int remainingRows = r-totalPairs; 
        if (remainingRows>=singles)
        {
          maxHappy+=singles;
        }
        else{
         singles-=remainingRows;
         cout<<totalPeople-2*singles<<endl;
          continue;
        }
         
        
        cout << maxHappy << "\n";
    }
    
    return 0;
}
