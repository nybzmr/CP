#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        set<int> distinct_elements(arr, arr+n);
        int num_distinct_elements = distinct_elements.size();
        int max_element = arr[0];
        int max_count = 1;
        int current_count = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1]) {
                current_count++;
                if (current_count > max_count) {
                    max_count = current_count;
                    max_element = arr[i - 1];
                }
            } else {
                current_count = 1;
            }
        }
        int unique_counter = num_distinct_elements-1;
        if (max_count - unique_counter >= 2) {
            cout << unique_counter + 1 << endl;
        } else if(max_count>=unique_counter){
            cout << unique_counter << endl;
        }
        else {
          cout<< max_count<<endl;
        }
    }
    return 0;
}