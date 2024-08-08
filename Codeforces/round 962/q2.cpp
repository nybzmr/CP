#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cin.ignore(); // Ignore the leftover newline character in the buffer

        vector<string> lines(n);
        for (int i = 0; i < n; ++i) {
            getline(cin, lines[i]);
        }

        for (int i = 0; i < n; i += (k)) {
            for (int j = 0; j < n; j += (k)) {
                cout << lines[i][j];
            }
            cout << endl; // Adding a newline to format the output better
        }
    }
    return 0;
}
