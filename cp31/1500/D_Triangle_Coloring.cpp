// Author: Nayaab Zameer 
#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 998244353
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
const int M = mod;

int add(int x, int y){
    return ((x + y) % M + M) % M;
}

int mul(int x, int y){
    return x * 1ll * y % M;   
}

int binpow(int x, int y){
    int z = 1;
    while(y){
        if(y % 2 == 1) z = mul(z, x);
        x = mul(x, x);
        y /= 2;
    }
    return z;
}

int inv(int x){
    return binpow(x, M - 2);    
}

int divide(int x, int y){
    return mul(x, inv(y));
}

int main(){
    fast;
    int n;
    cin >> n;
    int ans = 1;

    for(int i = 1; i <= n / 6; i++)
        ans = mul(ans, divide(i + n / 6, i));

    for(int i = 0; i < n / 3; i++){
        vector<int> a(3);
        fr(3) cin >> a[i];
        int mn = *min_element(all(a));
        int cnt_min = count(all(a), mn);
        ans = mul(ans, cnt_min);
    }

    cout << ans nl;
    return 0;
}
