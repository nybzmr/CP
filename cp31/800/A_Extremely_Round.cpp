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
ll t=1;
cin>>t;
while(t--)
{
   ll n;
   cin>>n;
   int x;
   if (n<=10)
   {
    cout<<n nl;
   }
   else if (n<=100)
   {
    x=n/10;
    cout<<(x)+9 nl;
   }
   else if (n<=1000)
   {  
      x=n/100;
      cout<< x+18 nl;
   }
   else if (n<=10000)
   {
    x=n/1000;
    cout<< x+27 nl;
   }
   else if (n<1e5)
   {
    x=n/10000;
    cout<<x+36 nl;
   }
   else if (n<1e6)
   {
    x=n/1e5;
    cout<<x+45 nl;
   }
   
}
return 0;
}
