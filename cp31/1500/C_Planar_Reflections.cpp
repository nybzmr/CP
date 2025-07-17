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
const int N = 1001;
const int K = 1001;

int n, k;
int dp[N][K][2];

int solve(int curr, int k, int dir) {
    if (k == 1) return 1;

    if (dp[curr][k][dir] != -1) return dp[curr][k][dir];

    int ans = 2; // me and my copy

    if (dir == 1) {
        if (curr < n) ans = (ans + solve(curr + 1, k, dir) - 1 + M) % M;
        if (curr > 1) ans = (ans + solve(curr - 1, k - 1, 1 - dir) - 1 + M) % M;
    } else {
        if (curr > 1) ans = (ans + solve(curr - 1, k, dir) - 1 + M) % M;
        if (curr < n) ans = (ans + solve(curr + 1, k - 1, 1 - dir) - 1 + M) % M;
    }

    return dp[curr][k][dir] = ans;
}

int main(){
    fast;
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        memset(dp, -1, sizeof(dp));
        cout << solve(1, k, 1) nl;
    }
    return 0;
}
