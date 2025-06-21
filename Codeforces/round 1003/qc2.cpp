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


int main(){
  fast;
  int t;
  cin >> t;
  while(t--){
      int n, m;
      cin >> n >> m;
      vector<ll> a(n);
      for (int i = 0; i < n; i++){
          cin >> a[i];
      }

      vector<ll> b(m);
      for (int j = 0; j < m; j++){
          cin >> b[j];
      }
      sort(b.begin(), b.end());
      
      const ll INF = 1LL << 60;  
      
      ll L = -INF; 
      
      bool possible = true;
      for (int i = 0; i < n; i++){
          ll candidate1 = INF;
          if(a[i] >= L)
              candidate1 = a[i];
          

          ll candidate2 = INF;
          ll need = L + a[i];
          auto it = lower_bound(b.begin(), b.end(), need);
          if(it != b.end()){
              candidate2 = (*it) - a[i];
          }
          ll chosen = min(candidate1, candidate2);
          if(chosen == INF){
              possible = false;
              break;
          }
          L = chosen;
      }
      
      cout << (possible ? "YES" : "NO") << "\n";
  }
  return 0;
}