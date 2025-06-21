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
#define rfr(n) for(int i=n-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=a;i<=b;i++)
#define fr(n) for(long long i=0;i<n;i++)
#define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;


int main() {
  fast
  int t;
  cin >> t;
  while (t--) {
      int n;
      cin >> n;
      string s;
      cin >> s;

      int cnt01 = 0, cnt10 = 0;
      for (int i = 1; i < n; i++) {
          if (s[i - 1] == '0' && s[i] == '1') cnt01++;
          if (s[i - 1] == '1' && s[i] == '0') cnt10++;
      }

      int moves = n;
      if (s[0] == '1') moves++;
      for (int i = 1; i < n; i++) {
          if (s[i] != s[i - 1]) moves++;
      }

      int bg = 0;
      if (cnt01 >= 2 || cnt10 >= 2 || (s[0] == '1' && cnt01 >= 1)) {
          bg = 2;
      } else {
          bool g1 = false;
          if (cnt01 >= 1 && s[n - 1] == '0') g1 = true;
          if (cnt10 >= 1 && s[n - 1] == '1') g1 = true;
          if (s[0] == '1' && s[n - 1] == '0') g1 = true;
          if (g1) bg = 1;
      }
      cout << (moves - bg) << "\n";
  }

  return 0;
}