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


int main(){
   fast   
   ll t;
   cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n+1);
        for (int i = 1; i <= n; i++){
            cin >> p[i];
        }
        vector<int> d(n+1);
        for (int i = 1; i <= n; i++){
            cin >> d[i];
        }
        vector<int> cycleId(n+1, 0);
        vector<int> cycleSizes;
        int cid = 0;
        vector<bool> visited(n+1, false);
        for (int i = 1; i <= n; i++){
            if(!visited[i]){
                cid++;
                int cur = i;
                int size = 0;
                while(!visited[cur]){
                    visited[cur] = true;
                    cycleId[cur] = cid;
                    size++;
                    cur = p[cur];
                }
                cycleSizes.pb(size);
            }
        }
        vector<bool> intactCycle(cid+1, true);
        ll intact = n;
        for (int i = 1; i <= n; i++){
            int pos = d[i];
            int cyc = cycleId[pos];
            if(cyc && intactCycle[cyc]){
                intactCycle[cyc] = false;
                intact -= cycleSizes[cyc-1];
            }
            cout << (n - intact) << (i==n ? "\n" : " ");
        }
    }
    return 0;
}