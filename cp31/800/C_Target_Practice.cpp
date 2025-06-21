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
   vector<string>v(10);
   int score =0;
   for (int i = 0; i < 10; i++)
   {
    cin>>v[i];
   }
   for (int i = 0; i < 10; i++)
   {
    for (int j = 0; j < 10; j++)
    {
      if (i==0&&v[i][j]=='X'||j==0&&v[i][j]=='X'||i==9&&v[i][j]=='X'||j==9&&v[i][j]=='X')
      {
        score++;
      }
      else if (i==1&&v[i][j]=='X'||j==1&&v[i][j]=='X'||i==8&&v[i][j]=='X'||j==8&&v[i][j]=='X')
      {
        score+=2;
      }
      else if (i==2&&v[i][j]=='X'||j==2&&v[i][j]=='X'||i==7&&v[i][j]=='X'||j==7&&v[i][j]=='X')
      {
        score+=3;
      }
      else if (i==3&&v[i][j]=='X'||j==3&&v[i][j]=='X'||i==6&&v[i][j]=='X'||j==6&&v[i][j]=='X')
      {
        score+=4;
      }
      else if (i==4&&v[i][j]=='X'||j==4&&v[i][j]=='X'||i==5&&v[i][j]=='X'||j==5&&v[i][j]=='X')
      {
        score+=5;
      }
    }
   
   }
   cout<<score<<endl; 
}
return 0;
}
