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

void func(int n, vector<string> &ans, string &temp, int i=0, int j=0)
{
  if (i==n&&j==n)
  {
    ans.pb(temp);
    return;
  }
  if (i+1<=n)
  {
    temp.pb('(');
    func(n,ans,temp,i+1,j);
    temp.pop_back();
  }
  if (j+1<=n&&j+1<=i)
  {
    temp.pb(')');
    func(n,ans,temp,i,j+1);
    temp.pop_back();
  }
    
}
int main(){
fast;
int n;
cin>>n;
vector<string>ans;
string temp;
func(n,ans,temp);
for (auto &s : ans) {
  cout << s << " ";
}
return 0;
}
