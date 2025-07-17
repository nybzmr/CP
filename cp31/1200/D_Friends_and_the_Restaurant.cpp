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

void solve() {
    int n;
    cin >> n;
    vector<ll> x(n), y(n);
    vector<pair<ll, int>> dif(n);

    fr(n) cin >> x[i];
    fr(n) cin >> y[i];
    fr(n) dif[i] = {y[i] - x[i], i};

    sort(all(dif));
    reverse(all(dif));

    int j = n - 1, cnt = 0;

    fr(n) {
        while(j > i && dif[i].ff + dif[j].ff < 0) j--;
        if(j <= i) break;
        cnt++;
        j--;
    }

    cout << cnt nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
