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
#define rfr(n) for(int i=(n)-1;i>=0;i--)
#define rep1(i,a,b) for(long long i=(a);i<=(b);i++)
#define fr(n) for(long long i=0;i<(n);i++)
#define nesfr(x,y) for(long long i=0;i<(x);i++)for(long long j=0;j<(y);j++)
#define rep(i,a,b) for(long long i=(a);i<(b);i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
typedef long long ll;
typedef vector<ll> makellv;
#define nl << "\n"

static const int PROB_MOD = 998244353;

ll modExp(ll base, ll exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % PROB_MOD;
        base = (base * base) % PROB_MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    fast;
    int n, m;
    cin >> n >> m;
    vector<vector<pair<int,int>>> segEnds(m + 1);
    ll totalNoPick = 1;

    fr(n) {
        int L, R;
        ll P, Q;
        cin >> L >> R >> P >> Q;
        ll invQ = modExp(Q, PROB_MOD - 2);
        ll pickProb = (P * invQ) % PROB_MOD;
        ll skipProb = (1 - pickProb + PROB_MOD) % PROB_MOD;
        totalNoPick = (totalNoPick * skipProb) % PROB_MOD;
        ll weight = (pickProb * modExp(skipProb, PROB_MOD - 2)) % PROB_MOD;
        segEnds[R].pb(mp(L, (int)weight));
    }

    makellv dp(m + 1);
    dp[0] = 1;
    rep1(pos, 1, m) {
        ll sumWays = 0;
        for (auto &pr : segEnds[pos]) {
            int st = pr.ff;
            int w = pr.ss;
            sumWays = (sumWays + dp[st - 1] * w) % PROB_MOD;
        }
        dp[pos] = sumWays;
    }

    ll answer = (totalNoPick * dp[m]) % PROB_MOD;
    cout << answer nl;
    return 0;
}

