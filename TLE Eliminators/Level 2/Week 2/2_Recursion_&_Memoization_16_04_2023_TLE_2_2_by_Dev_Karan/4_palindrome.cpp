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
#define rfr(n) for (int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for (long long i = a; i <= b; i++)
#define fr(n) for (long long i = 0; i < n; i++)
#define nesfr(x, y)                 \
  for (long long i = 0; i < x; i++) \
    for (long long j = 0; j < y; j++)
#define rep(i, a, b) for (long long i = a; i < b; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long int ll;
typedef long double ld;
typedef vector<ll> makellv;
#define nl << "\n"
const unsigned int M = 1000000007;
const int N = 2e5 + 5;

bool fac(string s, int i, int j)
{
  if (i>=j){
    return true;
  }
  if (s[i]!=s[j]){
    return false;
  }
  
  return fac(s, i+1, j-1);
}

int main()
{
  fast;
  string s;
  cin >> s;
  int i = 0, j = s.size()-1;
  bool ans = fac(s,i,j);
  ans?cout << "True" nl:cout<< "False" nl;
  return 0;
}
