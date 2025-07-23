#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

void solve() {
    int n;
    cin >> n;

    vector<pll> start(n), end(n);

    for (int i = 0; i < n; ++i) {
        cin >> start[i].first >> start[i].second >> end[i].first >> end[i].second;
    }

    ll total = 0;

    for (int i = 0; i < n; ++i) {
        ll dx = end[i].first - start[i].first;
        ll dy = end[i].second - start[i].second;

        if (dy < 0) {
            total += abs(dy) + (start[i].first - abs(min(dx, 0LL)));
        }
        if (dx < 0) {
            total += abs(dx);
        }
    }

    cout << total << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}