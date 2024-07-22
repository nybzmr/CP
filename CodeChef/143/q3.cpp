#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s, t;
        cin >> s >> t;

        int ns0 = 0, nt0 = 0;
        int swaps = 0;

        // Count the number of zeros in s and t
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') ns0++;
            if (t[i] == '0') nt0++;
        }

        // If the number of zeros is different, conversion is impossible
        if (ns0 != nt0) {
            cout << "No" << endl;
            continue;
        }

        // Handle the case when n == 2
        if (n == 2) {
            if (s == t) {
                if (s[0] == s[1]) {
                    cout << "Yes" << endl;
                } else if (k % 2 != 0) {
                    cout << "No" << endl;
                } else {
                    cout << "Yes" << endl;
                }
            } else {
                if (k % 2 == 0) {
                    cout << "No" << endl;
                } else {
                    cout << "Yes" << endl;
                }
            }
            continue;
        }

        // Count mismatches
        for (int i = 0; i < n; i++) {
            if (s[i]!=1) swaps++;
        }
        int ans = min(swaps,n-swaps);
        // Check if we can achieve exactly k swaps
        if (k >= swaps) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}