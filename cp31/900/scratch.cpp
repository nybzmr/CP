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
  int m, n;
  cin >> m >> n;

  vector<string> grid(m);
  for (int i = 0; i < m; ++i) {
      cin >> grid[i];
  }

  int changes = 0;

  for (int i = 0; i < m; ++i) {
      if (n <= 1) continue; 

      bool different_found = false;
      for (int j = 1; j < n; ++j) {
          if (grid[i][j] != grid[i][0]) {
              different_found = true;
              break;
          }
      }

      if (!different_found) {
          grid[i][1] = (grid[i][1] == 'a' ? 'b' : 'a'); 
          changes++;
      }
      for (int j = 0; j < n; ++j) {
          if (j + 1 < n && grid[i][j] == grid[i][j + 1]) {
              grid[i][j + 1] = (grid[i][j + 1] == 'a' ? 'b' : 'a');
              changes++;
          }
          if (i + 1 < m && grid[i][j] == grid[i + 1][j]) {
              grid[i + 1][j] = (grid[i + 1][j] == 'a' ? 'b' : 'a');
              changes++;
          }
      }
  }
  if (n == 1 && m > 1) {
      for (int i = 0; i < m - 1; ++i) {
          if (grid[i][0] == grid[i + 1][0]) {
              grid[i + 1][0] = (grid[i + 1][0] == 'a' ? 'b' : 'a');
              changes++;
          }
      }
  }

  cout << changes << endl;

  return 0;
}