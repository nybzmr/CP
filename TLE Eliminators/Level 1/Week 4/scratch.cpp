#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int arr[n][m];
        
        // Input array elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }

        // If there's only one element in the array
        if (n == 1 && m == 1) {
            cout << -1 << endl;
            continue;
        }

        // Printing from the second row and second column to last column and wrapping around
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                cout << arr[i][j] << " ";
            }

            cout << arr[i][0] << endl;
        }
        
        // Printing the first row, starting from the second column
        for (int i = 1; i < m; i++) {
            cout << arr[0][i] << " ";
        }
        // Printing the first element of the array last
        cout << arr[0][0];
        
        cout << endl;
    }
    return 0;
}
