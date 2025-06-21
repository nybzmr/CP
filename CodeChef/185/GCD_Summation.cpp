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
#define fast ios_b::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int  N = 2e5 + 5 ;

int main(){
    int t;
    cin >> t;
    while(t--){
      ll n, k;
      cin >> n >> k;

       ll b = n - 2;      
       ll x = k - b;   
      if (k < n-1) {
          cout << -1 nl;
          continue;
      }

      vector<ll> a(n);
      
      
      a[0] = x;
      a[1] = 2 * x;
      cout<<a[0]<<" "<<a[1]<<" ";
      for (int i = 1; i <=n-2; i++) {
         cout<<a[1]+i<<" ";
      }
      cout<<endl;

    }
    return 0;
}
