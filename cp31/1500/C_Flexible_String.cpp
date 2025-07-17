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

string a, b, char_list;
bool mark[26];
ll ans, k;

ll count_matching_pair() {
    ll tot_pair = 0, match_count = 0;
    fr(a.size()) {
        if(a[i] == b[i] || mark[a[i] - 'a']) match_count++;
        else {
            tot_pair += match_count * (match_count + 1) / 2;
            match_count = 0;
        }
    }
    tot_pair += match_count * (match_count + 1) / 2;
    return tot_pair;
}

void solve_rec(ll pos, ll cnt) {
    if(cnt > k) return;
    if(pos == char_list.size()) {
        if(cnt == k) ans = max(ans, count_matching_pair());
        return;
    }
    solve_rec(pos + 1, cnt);
    mark[char_list[pos] - 'a'] = 1;
    solve_rec(pos + 1, cnt + 1);
    mark[char_list[pos] - 'a'] = 0;
}

void solve(){
    ll n;
    cin >> n >> k;
    cin >> a >> b;

    unordered_set<char> unq(all(a));
    char_list.clear();
    for(auto ch : unq) char_list.pb(ch);
    k = min(k, (ll)char_list.size());
    memset(mark, 0, sizeof mark);
    ans = 0;
    solve_rec(0, 0);
    cout << ans nl;
}

int main(){
    fast;
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
