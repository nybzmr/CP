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
const unsigned int MOD = 998244353;
const int  MAX = 2e5 + 5 ;


vector<ll> fact(MAX + 1, 1);

void precomputeFactorials() {
    for (int i = 2; i <= MAX; ++i) {
        fact[i] = (fact[i-1] * i) % MOD;
    }
}

int main(){
    precomputeFactorials();
    ll t = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll op=0;
        ll count = 1;
        ll k=1;
        ll n=s.size();
        for (int i = 1; i < n; i++)
        {
            if(s[i] == s[i-1]){
                count++;
            }
            else{
              op+=(count-1);
              k=(k*count)%MOD;
              count = 1;
            }
        }
        op+=(count-1);
        k=(k*count)%MOD;
        ll ways = (k*fact[op])%MOD;

        cout << op<< " " << ways << endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define MOD 998244353
// #define f(i, n) for (long long i = 0; i < n; i++)

// const int MAX = 200000;

// vector<int> fact(MAX + 1, 1);

// void precomputeFactorials()
// {
//   for (int i = 2; i <= MAX; ++i)
//   {
//     fact[i] = (fact[i - 1] * i) % MOD;
//   }
// }

// signed main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   cout.tie(nullptr);

//   precomputeFactorials();

//   int t;
//   cin >> t;
//   while (t--)
//   {
//     string s;
//     cin >> s;

//     int op = 0;
//     int k = 1;
//     int n = s.length();
//     int count = 1;

//     for (int i = 1; i < n; ++i)
//     {
//       if (s[i] == s[i - 1])
//       {
//         count++;
//       }
//       else
//       {

//         op += (count - 1);

//         k = (k * count) % MOD;

//         count = 1;
//       }
//     }

//     op += (count - 1);

//     k = (k * count) % MOD;
//     cout << op << " " << (k * fact[op]) % MOD << endl;
//   }
//   return 0;
// }