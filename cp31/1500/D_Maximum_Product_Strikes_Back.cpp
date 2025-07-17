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
const int N = 2e5 + 5;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    fr(n) cin >> a[i];

    int ans = 0, ap = n, as = 0;
    for(int i = 0, l = -1; i <= n; i++){
        if(i == n || a[i] == 0){
            int cnt = 0, cl = 0, cr = 0;
            bool neg = false;
            int left = -1, right = -1;
            for(int j = l + 1; j < i; j++){
                neg ^= a[j] < 0;
                if(a[j] < 0){
                    right = j;
                    cr = 0;
                }
                if(abs(a[j]) == 2){
                    cnt++;
                    cr++;
                    if(left == -1) cl++;
                }
                if(a[j] < 0 && left == -1){
                    left = j;
                }
            }
            if(neg){
                if(cnt - cl > cnt - cr){
                    right = i;
                    cnt -= cl;
                } else {
                    left = l;
                    cnt -= cr;
                }
            } else {
                left = l;
                right = i;
            }
            if(ans < cnt){
                ans = cnt;
                ap = left + 1;
                as = n - right;
            }
            l = i;
        }
    }
    cout << ap << ' ' << as nl;
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
