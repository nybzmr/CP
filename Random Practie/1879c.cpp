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
const unsigned int MOD= 998244353;
const int  N = 2e5 + 5 ;

long long fact(int n) {    
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact*i)%MOD;
    }
    return fact;
}

int main(){
    fast;
    ll t = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll curr = 1;
        vector<int> v;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i] == s[i-1]){  
                curr++;
            }
            else{
                if(curr > 1){
                    v.push_back(curr);
                }
                curr = 1;  
            }
        }
        
        if(curr > 1){
            v.push_back(curr);
        }
        
        ll a1 = 0;
        ll a2 = 1; 
        
        for (int i = 0; i < v.size(); i++)
        {
            a1 += v[i];
            a2 += (v[i]-1);
        }
        a1 -= v.size();
        int ways = fact(a2)%MOD;
        
        cout << a1 << " " << ways << endl;
    }
    return 0;
}


