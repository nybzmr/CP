#include <bits/stdc++.h>
using namespace std;

#define int long long
#define push emplace_back
#define pair make_pair
#define newline '\n'
#define affirm() cout << "YES" << newline
#define deny() cout << "NO" << newline
#define iterate_all(v) (v).begin(), (v).end()
#define iterate_reverse(v) (v).rbegin(), (v).rend()

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int val_a, val_b, step;
        cin >> val_a >> val_b >> step;
        
        int moves_x = (val_a + step - 1) / step;
        int moves_y = (val_b + step - 1) / step;
        
        if (moves_y >= moves_x) {
            cout << moves_y * 2 << newline;
        } else {
            cout << (moves_x * 2) - 1 << newline;
        }
    }

    return 0;
}
