// #include <bits/stdc++.h>
// using namespace std;

// #define TERMINATOR '\n'

// const int MODULO = 1e9 + 7;
// const long long INFINITY_LIMIT = LLONG_MAX >> 1;

// long long findPairs(const vector<int> &data)
// {
//   int length = data.size();
//   unordered_map<int, int> frequencyTracker;
//   int zero_counter = 0;

//   for (int idx = 0; idx < length; idx++)
//   {
//     if (data[idx] == 0)
//     {
//       zero_counter++;
//     }
//     else
//     {
//       frequencyTracker[data[idx]]++;
//     }
//   }

//   if (zero_counter == length)
//   {
//     return length * (length - 1) / 2;
//   }

//   long long total_pairs = zero_counter * (zero_counter - 1) / 2;

//   int highest_freq = 0;
//   for (const auto &record : frequencyTracker)
//   {
//     total_pairs += record.second * (record.second - 1) / 2;
//     highest_freq = max(highest_freq, record.second); 
//   }

//   total_pairs += highest_freq * zero_counter;

//   return total_pairs;
// }

// signed main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);

//   int test_cases;
//   cin >> test_cases;

//   while (test_cases--)
//   {
//     int length;
//     cin >> length;
//     vector<int> data(length);
//     for (int i = 0; i < length; i++)
//     {
//       int x, y;
//       cin >> x >> y;
//       data[x] = y;
//       long long result = findPairs(data);
//       cout << result << " ";
//     }
//     cout<<TERMINATOR;
//   }

//   return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define int long long

int cal(int num)
{
  return ((num * (num - 1)) / 2);
}

signed main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;

    int ct = n;

    int val = 0;

    vector<pair<int, int> > v;
    map<int, int> mp;
    int mx = 0;
    map<int, int> mp2;
    int gre = 0;
    for (int i = 1; i <= n; i++)
    {
      val = 0;
      int x, y;
      cin >> x >> y;

      mp[y]++;

      if (mp[y] > mx)
      {
        mx = mp[y];
      }
      else
      {
        if (mp[y] >= 1)
        {
          gre += cal(mp[y]) - cal(mp[y] - 1);
        }
      }

      val += cal(mx + (ct - i));
      val += gre;

      cout << val << " ";
    }
    cout << endl;
  }
  return 0;
}