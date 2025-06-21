// #include <bits/stdc++.h>
// using namespace std;

// #define endl '\n'

// const int MOD = 1e9 + 7;
// const long long INF = LLONG_MAX >> 1;
// signed main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int tc;
//   cin >> tc;
//   while (tc--)
//   {
//     int n;
//     cin >> n;
//     vector<int> p0;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//       cin >> v[i];
//       if (v[i] == 0)
//       {
//         p0.push_back(i);
//       }
//     }
//     if (p0.size() == n)
//     {
//       cout << n * (n - 1) / 2;
//       continue;
//     }
   
    
//     sort(v.begin(), v.end());

//     int cc = 1;
//     int c = 0;
//     vector<int> track;

//     for (int i = 1; i < n; i++)
//     {
//       if (v[i] != 0)
//       {
//         if (v[i] == v[i - 1])
//         {
//           cc++;
//           if (cc > c)
//           {
//             c = cc;
//           }
//         }
//         else
//         {
//           track.push_back(cc);
//           cc = 1;
//         }
//       }
//     }
//     if (p0.size()==0)
//     {
//       long long int ans =0;
//       for (int i = 0; i < track.size(); i++)
//       {
//         ans += (track[i]) * (track[i] - 1) / 2;
//       }
//       cout<<ans<<endl;
//       continue;
//     }
//     int n0 = p0.size();

//     long long int ans = (n0 + c) * (n0 + c - 1) / 2;

//     // if (n0 <= 1)
//     // {
//     //   for (int i = 0; i < track.size(); i++)
//     //   {
//     //     ans += (track[i]) * (track[i] - 1) / 2;
//     //   }
//     // }
//     // else
//     // {
//     //   for (int i = 1; i < track.size(); i++)
//     //   {
//     //     ans += (track[i]) * (track[i] - 1) / 2;
//     //   }
//     // }

//     // if (n0 != 0)
//     // {
//     //   ans -= c * (c - 1) / 2;
//     // }
//     for (int i = 0; i < track.size(); i++)
//       {
//         ans += (track[i]) * (track[i] - 1) / 2;
//       }
//     ans -= c * (c - 1) / 2;  
//     cout << ans << endl;
//   }

//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define TERMINATOR '\n'

const int MODULO = 1e9 + 7;
const long long INFINITY_LIMIT = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int findPairs()
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int length;
        cin >> length;
        vector<int> data(length);
        unordered_map<int, int> frequencyTracker;
        int zero_counter = 0;

        for (int idx = 0; idx < length; idx++) {
            cin >> data[idx];
            if (data[idx] == 0) {
                zero_counter++;
            } else {
                frequencyTracker[data[idx]]++;
            }
        }

        if (zero_counter == length) {
            cout << length * (length - 1) / 2 << TERMINATOR;
            continue;
        }

        long long total_pairs = zero_counter * (zero_counter - 1) / 2;

        int highest_freq = 0;
        for (const auto& record : frequencyTracker) {
            total_pairs += record.second * (record.second - 1) / 2;
            highest_freq = max(highest_freq, record.second);
        }

        total_pairs += highest_freq * zero_counter;

        cout << total_pairs << TERMINATOR;
    }

    return 0;
}
