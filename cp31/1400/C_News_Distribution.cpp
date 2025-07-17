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
const int  N = 5e5 + 13 ;

int n, m;
int rk[N], p[N];

int getP(int a){
    return (a == p[a] ? a : p[a] = getP(p[a]));
}

void unite(int a, int b){
    a = getP(a);
    b = getP(b);
    if(a == b) return;
    if(rk[a] < rk[b]) swap(a, b);
    p[b] = a;
    rk[a] += rk[b];
}

int main(){
    fast;
    cin >> n >> m;
    fr(n) p[i] = i, rk[i] = 1;
    fr(m){
        int k;
        cin >> k;
        int lst = -1;
        for(int j = 0; j < k; j++){
            int x;
            cin >> x;
            --x;
            if(lst != -1) unite(x, lst);
            lst = x;
        }
    }
    fr(n) cout << rk[getP(i)] << " ";
    cout nl;
    return 0;
}
