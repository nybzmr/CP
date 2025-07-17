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
    vector<int> a(n);
    for(auto &i : a) cin >> i;
    int l = 0, r = n - 1;
    int mn = 1, mx = n;

    while(l <= r) {
        if(a[l] == mn) {
            l++;
            mn++;
        } else if(a[l] == mx) {
            l++;
            mx--;
        } else if(a[r] == mn) {
            r--;
            mn++;
        } else if(a[r] == mx) {
            r--;
            mx--;
        } else {
            break;
        }
    }

    if(l <= r) {
        cout << l + 1 << " " << r + 1 nl;
    } else {
        cout << -1 nl;
    }
}

int main(){
    fast;
    int q = 1;
    cin >> q;
    while(q--) solve();
    return 0;
}
