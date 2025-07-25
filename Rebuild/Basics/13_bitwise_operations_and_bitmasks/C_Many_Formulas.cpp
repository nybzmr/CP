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

int main() {
    fast;
    string S;
    cin >> S;
    ll total = 0;
    int n = S.size();
    for (int mask = 0; mask < (1 << (n - 1)); ++mask) {
        ll sum = 0, curr = 0;
        for (int i = 0; i < n; ++i) {
            curr = curr * 10 + (S[i] - '0');
            if (i < n - 1 && (mask & (1 << i))) {
                sum += curr;
                curr = 0;
            }
        }
        sum += curr;
        total += sum;
    }
    cout << total << endl;
    return 0;
}