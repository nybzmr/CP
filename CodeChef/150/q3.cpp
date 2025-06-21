#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) {
        int n,k;
        cin >> n>>k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
          cin >> v[i];
        }
        int sum = v[n-1];
        for (int i = 0; i < k; i++)
        {
          sum+=v[i];
          v.pop_back();
          v.push_back(sum);
        }
        for (int i = k; i < n; i++)
        {
          cout<<v[i]<< " ";
        }
        cout<<endl;
    }

    return 0;
}