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

int main(){
  fast;
  int t;
  cin >> t;
  while(t--){
      int n, m;
      cin >> n >> m;  
      vector<int> a(n);
      for (int i = 0; i < n; i++){
          cin >> a[i];
      }
      int b;
      cin >> b;  
      vector<vector<bool> > dp(n, vector<bool>(2, false));
      dp[0][0] = dp[0][1] = true; 
      

      for (int i = 1; i < n; i++){
          for (int cur = 0; cur < 2; cur++){
              int curVal = (cur == 0 ? a[i] : b - a[i]);
              for (int prev = 0; prev < 2; prev++){
                  if (dp[i - 1][prev]){
                      int prevVal = (prev == 0 ? a[i - 1] : b - a[i - 1]);
                      if (prevVal <= curVal) {
                          dp[i][cur] = true;
                      }
                  }
              }
          }
      }
      
      if (dp[n - 1][0] || dp[n - 1][1])
          cout << "YES" << endl;
      else 
          cout << "NO" << endl;
  }
  return 0;
}

