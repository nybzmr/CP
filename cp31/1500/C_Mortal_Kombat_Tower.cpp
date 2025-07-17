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
const int INF = 1e9 + 5;

void run_case() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (auto &a : A) cin >> a;

    vector<array<int, 2>> dp(N + 1, {INF, INF});
    dp[0][1] = 0;

    for (int i = 0; i < N; i++) {
        for (int who = 0; who < 2; who++) {
            for (int fight = 1; fight <= min(N - i, 2); fight++) {
                int hard = A[i] + (fight > 1 ? A[i + 1] : 0);
                dp[i + fight][!who] = min(dp[i + fight][!who], dp[i][who] + who * hard);
            }
        }
    }
    cout << min(dp[N][0], dp[N][1]) nl;
}

int main(){
    fast;
    int t; cin >> t;
    while (t--) run_case();
    return 0;
}
