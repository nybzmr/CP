#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fast_cin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    fast_cin();
    ll t;
    cin >> t;
    while (t--) {
        ll n, s, m;
        cin >> n >> s >> m;
        vector<pair<ll, ll>> intervals(n);

        for (ll i = 0; i < n; i++) {
            cin >> intervals[i].first >> intervals[i].second;
        }

        bool possible = false;

        // Check before the first task
        if (intervals[0].first >= s) {
            possible = true;
        }

        // Check between tasks
        for (ll i = 0; i < n - 1 && !possible; i++) {
            if (intervals[i + 1].first - intervals[i].second >= s) {
                possible = true;
            }
        }

        // Check after the last task
        if (m - intervals[n - 1].second >= s) {
            possible = true;
        }

        // Output the result for the current test case
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
