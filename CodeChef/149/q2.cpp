#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

#define output_newline << endl

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int size;
        cin >> size;

        vector<ll> elements(size);
        ll negative_count = 0, positive_count = 0;
        ll first_positive_idx = -1, last_positive_idx = -1;
        bool found_first_positive = true;

        for (int i = 0; i < size; i++) {
            cin >> elements[i];

            if (elements[i] < 0) {
                negative_count++;
            } else if (elements[i] > 0) {
                positive_count++;
                last_positive_idx = i;
                if (found_first_positive) {
                    first_positive_idx = i;
                    found_first_positive = false;
                }
            }
        }

        if (positive_count <= 1) {
            cout << 0 output_newline;
            continue;
        }

        ll result = 0;
        for (int i = first_positive_idx + 1; i < last_positive_idx; i++) {
            if (elements[i] < 0) {
                result++;
            }
        }

        cout << result output_newline;
    }

    return 0;
}
