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
const int N = 40004, P = 502;

ll dp[N][P];

int reverseNum(int n){
    int r = 0;
    while(n > 0){
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

bool isPalindrome(int n){
    return reverseNum(n) == n;
}

int main(){
    fast;
    vector<int> palin;
    palin.pb(0);
    for(int i = 1; i < 2 * N; i++){
        if(isPalindrome(i)) palin.pb(i);
    }

    for(int j = 1; j < P; j++) dp[0][j] = 1;

    for(int i = 1; i < N; i++){
        dp[i][0] = 0;
        for(int j = 1; j < P; j++){
            if(palin[j] <= i)
                dp[i][j] = (dp[i][j - 1] + dp[i - palin[j]][j]) % M;
            else
                dp[i][j] = dp[i][j - 1];
        }
    }

    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        cout << dp[n][P - 1] nl;
    }

    return 0;
}
