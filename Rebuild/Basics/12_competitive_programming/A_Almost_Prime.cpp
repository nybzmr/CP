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

vector<int> seive(int n)
{
  vector<bool> isPrime(n + 1, true);
  isPrime[0] = isPrime[1] = false;
  for (int p = 2; p * p < n; p++)
  {
    if (isPrime[p])
    {
      for (int i = p * p; i < n; i += p)
      {
        isPrime[i] = false;
      }
    }
  }
  vector<int> primes;
  for (int p = 2; p <= n; ++p)
  {
    if (isPrime[p])
    {
      primes.push_back(p);
    }
  }
  return primes;
}

int main()
{
  fast;
  int n;
  cin >> n;
  set<int> uniquePrimeDivisors;

  if (n < 6)
  {
    cout << 0 nl;
  }
  else
  {
    vector<int> primes = seive(n);

    int i = 6;
    vector<int> ans;
    while (i <= n)
    {
      int primeCount = 0;
      for (auto prime : primes)
      {
        if (prime < i)
        {
          if (i % prime == 0)
          {
            primeCount++;
          }
        }
        else
        {
          break;
        }
      }
      if (primeCount == 2)
      {
        ans.pb(i);
      }
      i++;
    }
    cout << ans.size() nl;
  }
  return 0;
}