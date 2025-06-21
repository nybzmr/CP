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
#define optimize_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

int main() {
  optimize_io;
  int test_cases;
  cin >> test_cases;
  
  while (test_cases--) {
      int length;
      cin >> length;
      vector<int> arr(length - 2);
      
      for (int idx = 0; idx < length - 2; idx++) {
          cin >> arr[idx];
      }
      
      bool possible = true;
      
      for (int idx = 0; idx < length - 2; idx++) {
          if (arr[idx] == 1) {
              if (idx + 2 < (int)arr.size() && arr[idx + 2] == 1 && arr[idx + 1] == 0) {
                  possible = false;
                  cout << "NO\n";
                  break;
              }
          }
      }
      
      if (possible) {
          cout << "YES\n";
      }
  }
  
  return 0;
}