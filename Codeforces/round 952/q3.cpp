#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int nGood = 0;
        for (int i = 1; i <= n; i++) { // Note: Changed the loop range to 1 to n inclusive
            auto maxIt = max_element(arr.begin(), arr.begin() + i);
            long long int max = *maxIt;
            long long int sum = accumulate(arr.begin(), arr.begin() + i, 0);
            if (sum == 2 * max) {
                nGood++;
                for (int j = 0; j <=i; j++)
                {
                  cout<<arr[j]<<" ";
                }
                cout<<endl;
            }
        }

        cout << nGood << endl;
    }
    return 0;
}
