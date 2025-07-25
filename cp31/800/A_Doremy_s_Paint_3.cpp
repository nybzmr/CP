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
      int n;
      cin >> n;
      vector<int> v(n);
      map<int,int> freq;
      for (int i = 0; i < n; i++){
           cin >> v[i];
           freq[v[i]]++;
      }
      
      // If there's only one distinct value, it's good.
      if(freq.size() == 1){
          cout << "YES" << endl;
      }
      // If there are two distinct values, check frequency conditions.
      else if(freq.size() == 2){
          auto it1 = freq.begin();
          auto it2 = prev(freq.end());
          int diff = abs(it1->second - it2->second);
          if((n % 2 == 0 && diff == 0) || (n % 2 == 1 && diff == 1))
              cout << "YES" << endl;
          else
              cout << "NO" << endl;
      }
      // More than 2 distinct values -> impossible to form a good array.
      else{
          cout << "NO" << endl;
      }
   }
   return 0;
}