#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
const int inf = 1e15 + 20;
/*
 __builtin_popcountll(x): Counts the number of one’s(set bits) in an integer(long/long long).
 __builtin_parityll(x): Checks the Parity of a number.Returns true(1) if the number has odd parity(odd number of set bits) else it returns false(0) for even parity(even number of set bits).
 __builtin_clzll(x): Counts the leading number of zeros of the integer(long/long long).
 __builtin_ctzll(x): Counts the trailing number of zeros of the integer(long/long long).
*/
string s;
void solve()
{
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s.back() && (i + 1) > (s.length() - 1 - i) && i != s.length() - 1)
        {
            bool check = true;
            int j = s.length() - 1;
            int ind = i;
            while (j > i)
            {
                if (s[j] == s[ind])
                {
                    j--;
                    ind--;
                }
                else
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                cout << "YES" << "\n";
                string ans(s.begin(), s.begin() + i + 1);
                cout << ans << "\n";
                return;
            }
        }
    }
    cout << "NO" << "\n";
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}