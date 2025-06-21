#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < long long > v(n);
        int count = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += (abs(v[i]));
            if (v[i] < 0) count++;
        }
        if (count % 2 == 0) cout << sum << endl;
        else {
            long long mn = INT_MAX;
            for (int i = 0; i < n; i++) {
                mn = min(mn, abs(v[i]));

            }
            cout << sum - 2 * mn << endl;
        }
    }
}