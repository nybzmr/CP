#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Sort the array to make it easier to manage the smallest and largest values
    sort(a.begin(), a.end());

    // Increase the smallest elements with the available k
    for (int i = 0; i < n - 1 && k > 0; i++) {
        // Calculate the maximum increase that can be made to a[i] to make it equal to a[n-1]
        long long increase = min(k, a[n-1] - a[i]);
        a[i] += increase;
        k -= increase;
    }

    // Now, simulate the process of picking numbers
    long long firstManSum = 0, secondManSum = 0;
    for (int i = n - 1; i >= 0; i -= 2) {
        firstManSum += a[i];  // First man picks the largest remaining element
        if (i - 1 >= 0) {
            secondManSum += a[i-1];  // Second man picks the smallest remaining element
        }
    }

    // Calculate and output the result (the difference)
    cout << firstManSum - secondManSum << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
