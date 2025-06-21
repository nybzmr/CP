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
   int min=1001,minindex=0, max=0, maxindex=0;
   int n;
   cin>>n;
   vector<int>a(n);
   vector<int>b(n);
   vector<int>c(n);
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
    if (a[i]<min)
    {
      min=a[i];
      minindex=i;
    }
    if (a[i]>max)
    {
      max=a[i];
      maxindex=i;
    }
    // b[i]=min;
    // c[i]-max;
   }
   sort(a.begin(),a.end());
   int sum=0;
   for (int i = 0; i < n-1; i++)
   {
    sum+=max-min;
   }
   cout<<sum<<endl;
   
}
return 0;
}
