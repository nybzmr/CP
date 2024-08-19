#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n, int* arr, int size) {
    for (int i = 0; i < size; i++) {
        if (n == arr[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int prime_arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 
                       67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 
                       139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};
    int size = sizeof(prime_arr) / sizeof(prime_arr[0]);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int even_count = 0, odd_count = 0, non_one_odd_count = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) {
                even_count++;
            } else {
                odd_count++;
                if (v[i] > 1) {
                    non_one_odd_count++;
                }
            }
        }

        if (even_count >= 2) {
            for (int i = 0; i < n; i++) {
                if (v[i] % 2 == 0) {
                    for (int j = i + 1; j < n; j++) {
                        if (v[j] % 2 == 0) {
                            cout << i + 1 << " " << j + 1 << endl;
                            goto next_case;
                        }
                    }
                }
            }
        }

        if (non_one_odd_count >= 2) {
            for (int i = 0; i < n; i++) {
                if (v[i] % 2 != 0 && v[i] > 1) {
                    for (int j = i + 1; j < n; j++) {
                        if (v[j] % 2 != 0 && v[j] > 1) {
                            cout << i + 1 << " " << j + 1 << endl;
                            goto next_case;
                        }
                    }
                }
            }
        }
        if (non_one_odd_count<2&&even_count<2)
        {
          for (int i = 0; i < n; i++)
          {
            for (int j = i; j < n; j++)
            {
              int sum = v[i]+v[j];
              if (isPrime(sum, prime_arr, size))
              {
                cout<<i+1<<" "<<j+1;
              }
              
            }
            
          }
          
        }
        
        cout << -1 << endl;

    }
    return 0;
}
