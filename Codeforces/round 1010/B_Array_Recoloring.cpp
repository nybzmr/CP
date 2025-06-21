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
#define nesfr(x,y) for(long long i=0;i<x;i++) for(long long j=0;j<y;j++)
#define rep(i,a,b) for(long long i=a;i<b;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

int main() {
  fast;
  int t;
  cin >> t;
  while (t--) {
      int n, k;
      cin >> n >> k;
      vector<pair<int, int> > v(n);  

      for (int i = 0; i < n; i++) {
          cin >> v[i].first;
          v[i].second = i;
      }

      
      sort(v.rbegin(), v.rend());

      vector<bool> isBlue(n, false);
      ll sum_b = 0;

      
      for (int i = 0; i < k; i++) {
          sum_b += v[i].first;
          isBlue[v[i].second] = true;
      }

     
      priority_queue<int> pq;

      for (int i = 0; i < n; i++) {
          if (!isBlue[i]) {
              if ((i > 0 && isBlue[i - 1]) || (i < n - 1 && isBlue[i + 1])) {
                  pq.push(v[i].first);
              }
          }
      }

      int x = 0;
      if (!pq.empty()) x = pq.top();

      cout << (sum_b + x) << "\n";
  }
  return 0;
}