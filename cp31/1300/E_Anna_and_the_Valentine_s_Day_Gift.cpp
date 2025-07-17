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
const int N = 2e5 + 5;

int n, m;
string arr[N];
int len[N], zrr[N];

void build() {
    memset(zrr, 0, sizeof(*zrr) * n);
    fr(n) {
        len[i] = arr[i].size();
        for (auto it = arr[i].rbegin(); it != arr[i].rend() && *it == '0'; ++it) {
            ++zrr[i];
        }
    }
}

string get_winner() {
    int ans = 0;
    fr(n) ans += len[i] - zrr[i];
    sort(zrr, zrr + n, greater<int>());
    fr(n) if (i & 1) ans += zrr[i];
    return (ans - 1 >= m ? "Sasha" : "Anna");
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        fr(n) cin >> arr[i];
        build();
        cout << get_winner() nl;
    }
    return 0;
}
