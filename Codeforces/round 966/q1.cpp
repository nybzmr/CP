#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v; 
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        v.push_back(s);
    }


    for (int i = 0; i < v.size(); i++) {
        if (v[i].size() >= 3) { 
            if (v[i][2] == '1' && v[i].size() == 3) {
                cout << "NO" << endl;
                continue;
            }
      
            if (v[i][0] == '1' && v[i][1] == '0' && v[i][2] != '0') {
                cout << "YES" << endl;
                continue;;
            }
        }
        cout << "NO" << endl;
    }
    
    return 0;
}
