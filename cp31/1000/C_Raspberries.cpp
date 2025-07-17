// Author: Nayaab Zameer
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                 \
  for (long long i = 0; i < x; i++) \
    for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main()
{
  fast;
  ll t = 1;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> a[i];
    }

    int min_operations = INT_MAX;
    bool already_divisible = false;
    vector<int> operations(n);

    for (int i = 0; i < n; ++i)
    {
      if (a[i] % k == 0)
      {
        already_divisible = true;
        break;
      }
    }

    if (already_divisible)
    {
      cout << 0 << '\n';
      continue;
    }
    if (k != 4)
    {
      for (int i = 0; i < n; ++i)
      {
        operations[i] = (k - (a[i] % k)) % k;
      }
      min_operations = *min_element(operations.begin(), operations.end());
    }
    else
    {
      int min_op_for_4 = INT_MAX;
      int min_op_for_2 = INT_MAX;
      int second_min_op_for_2 = INT_MAX;
      int count_even = 0;

      for (int i = 0; i < n; ++i)
      {
        int op_for_4 = (4 - (a[i] % 4)) % 4;
        if (op_for_4 < min_op_for_4)
        {
          min_op_for_4 = op_for_4;
        }
        if (a[i] % 2 != 0)
        {
          int op_for_2 = 1;
          if (op_for_2 < min_op_for_2)
          {
            second_min_op_for_2 = min_op_for_2;
            min_op_for_2 = op_for_2;
          }
          else if (op_for_2 < second_min_op_for_2)
          {
            second_min_op_for_2 = op_for_2;
          }
        }
        else
        {
          count_even++;
        }
      }

      int total_op_for_two_evens;
      if (count_even >= 2)
      {
        total_op_for_two_evens = 0;
      }
      else if (count_even == 1)
      {
        total_op_for_two_evens = min_op_for_2;
      }
      else
      {
        total_op_for_two_evens = min_op_for_2 + second_min_op_for_2;
      }

      min_operations = min(min_op_for_4, total_op_for_two_evens);
    }

    cout << min_operations << '\n';
  }
  return 0;
}

// vector<vector<int>> multiples = {{2, 4, 6, 8, 10}, {3, 6, 9}, {4, 8}, {5, 10}};
// int x = k - 2;
// int mm = INT_MAX;
// for (auto m : multiples[x])
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (m - v[i] < mm && m - v[i] >= 0)
//     {
//       mm = m - v[i];
//     }
//   }
// }
// cout << mm;
// cout nl;