#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;

int main(){
    fast;
    ll t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int sum = 0;
        bool exceeded = false;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];

            if (sum > k && !exceeded) {
                cout << i << endl;
                exceeded = true;  
            }
        }


        if (!exceeded) {
            cout << n << endl;
        }
    }
    return 0;
}
