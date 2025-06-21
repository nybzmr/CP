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
void printMap(map<int, string> m)
{
  for (auto pr : m)
  {
    cout << pr.second<<" ";
  }
}

int main()
{
  fast;
  map<int, string> m;
  m[1] = "Hello"; //O(log(n))
  m[3] = "nayaab";
  m[2] = "I'm";
  //printMap(m);


  //find and erase keyword
  auto it = m.find(3);

  if (it == m.end())

  {
    cout<<"No value found"<<endl;
  }
  else{
    cout<<it->first<<it->second;
  }

  // m.erase(3);// got removed from the map

  auto secondIt = m.find(2);
  m.erase(secondIt);


  printMap(m);
  
  return 0;
}
