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
    fast

    int t;
    cin >> t;
    while(t--){
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> a(n+1);
        for(int i=1;i<=n;i++) cin >> a[i];
        vector<int> b(n+1);
        for(int i=1;i<=n;i++) b[i] = (a[i] <= k);
        vector<int> P(n+1,0);
        for(int i=1;i<=n;i++) P[i] = P[i-1] + b[i];
        vector<int> Q(n+1);
        for(int i=1;i<=n;i++) 
            Q[i] = 2*P[i] - i;
        int Tval = 2*P[n] - n;

        vector<char> prefixGood1(n+1,0), good3(n+1,0);
        vector<int> prefixMinE(n+1, INT_MAX), prefixMinO(n+1, INT_MAX);
        vector<int> suffixMaxE(n+2, INT_MIN), suffixMaxO(n+2, INT_MIN);

        for(int i=1;i<=n-1;i++){
            bool g1 = (Q[i] >= (i&1));
            prefixGood1[i] = prefixGood1[i-1] || g1;
            if(i%2==0) prefixMinE[i] = min(prefixMinE[i-1], Q[i]);
            else        prefixMinO[i] = min(prefixMinO[i-1], Q[i]);
            if(i%2==0) prefixMinO[i] = prefixMinO[i-1];
            else        prefixMinE[i] = prefixMinE[i-1];
        }

        for(int r=n-1;r>=1;r--){
            int need = ((n&1) ^ (r&1));
            good3[r] = ( (Tval - Q[r]) >= need );
            suffixMaxE[r] = suffixMaxE[r+1];
            suffixMaxO[r] = suffixMaxO[r+1];
            if(r%2==0) suffixMaxE[r] = max(suffixMaxE[r], Q[r]);
            else        suffixMaxO[r] = max(suffixMaxO[r], Q[r]);
        }

        bool ok = false;
        for(int l=1;l<=n-2 && !ok;l++){
            if(Q[l] < (l&1)) continue;
            int p = l&1;
            if(suffixMaxE[l+1] >= Q[l] + p) ok = true;
            if(suffixMaxO[l+1] >= Q[l] + (1-p)) ok = true;
        }
        for(int r=2; r<=n-1 && !ok; r++){
            if(good3[r] && prefixGood1[r-1]) ok = true;
        }

        for(int r=2; r<=n-1 && !ok; r++){
            if(!good3[r]) continue;
            int q = r&1;

            if(prefixMinE[r-1] <= Q[r] - q) ok = true;
            if(prefixMinO[r-1] <= Q[r] - (1-q)) ok = true;
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
