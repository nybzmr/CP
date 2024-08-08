#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a;
        cin >> b;

        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            l--; // converting to zero-based index
            r--; // converting to zero-based index

            string x = a.substr(l, r - l +1); // substring from a
            string y = b.substr(l, r - l +1); // substring from b

            sort(x.begin(), x.end());
            sort(y.begin(), y.end());

            int op = 0;
            // for (int j = 0; j < x.size(); j++) {
            //     if (x[j] != y[j]) {
                    
            //         op++;
            //     }
            //}
            int j=0,k=0;
            while (j<x.size())
            {
              if (x[j]!=y[k])
              {
                op++;
                j++;
              }
              else{
                j++;
                k++;
              }
              
            }
            

            cout << op << endl;
        }
    }
    return 0;
}
