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

void solve(){
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    fr(n) cin >> a[i];
    fr(n) cin >> b[i];

    vector<ll> sum(n + 1), cnt(n + 1), add(n + 1);
    fr(n) sum[i + 1] = sum[i] + b[i];

    fr(n){
        int j = upper_bound(all(sum), a[i] + sum[i]) - sum.begin() - 1;
        cnt[i] += 1;
        cnt[j] -= 1;
        add[j] += a[i] - sum[j] + sum[i];
    }

    fr(n){
        cout << cnt[i] * b[i] + add[i] << " ";
        cnt[i + 1] += cnt[i];
    }
    cout nl;
}

int main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
