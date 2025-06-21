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

int gcd(int a, int b) {
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
fast;
ll t=1;
cin>>t;
while(t--)
{
   int n;
   cin>>n;
   vector<int>v(n);
   fr(n) cin>>v[i];

   bool ok = false;
   int idx = -1;

   fr(n) {
       int g1 = v[i], g2 = 0;
       for (int j = 0; j < n; j++) {
           if (i == j) continue;
           if (g2 == 0) g2 = v[j];
           else g2 = gcd(g2, v[j]);
       }
       if (g1 != g2) {
           ok = true;
           idx = i;
           break;
       }
   }

   if (!ok) {
       cout << "No" nl;
   } else {
       cout << "Yes" nl;
       fr(n) {
           if (i == idx) cout << 1;
           else cout << 2;
           if (i < n - 1) cout << " ";
       }
       cout nl;
   }
}
return 0;
}
