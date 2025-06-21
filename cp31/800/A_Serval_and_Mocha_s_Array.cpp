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

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    fast
    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        int n;
        cin >> n;
        vector<int> a(n);
        bool hasOne = false;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1)
                hasOne = true;
        }
        if(hasOne){
            sort(a.begin(), a.end());
            cout << "Yes" << "\n";
            continue;
        }
        int idx1 = -1, idx2 = -1;
        for (int i = 0; i < n && idx1 == -1; i++){
            for (int j = i + 1; j < n && idx1 == -1; j++){
                int g = gcd(a[i], a[j]);
                if(g <= 2){
                    idx1 = i;
                    idx2 = j;
                }
            }
        }
        
        if(idx1 == -1){
            cout << "No" << "\n";
            continue;
        }
        vector<int> perm;
        perm.push_back(a[idx1]);
        perm.push_back(a[idx2]);
        vector<bool> used(n, false);
        used[idx1] = true;
        used[idx2] = true;
        for (int i = 0; i < n; i++){
            if(!used[i])
                perm.push_back(a[i]);
        }
        
        int cur = perm[0];
        bool ok = true;
        for (int i = 1; i < n; i++){
            cur = gcd(cur, perm[i]);
            if(cur > i + 1){ 
                ok = false;
                break;
            }
        }
        
        if(ok){
            cout << "Yes" << "\n";
        } else {
            int tmp = perm[0];
            perm[0] = perm[1];
            perm[1] = tmp;
            cur = perm[0];
            ok = true;
            for (int i = 1; i < n; i++){
                cur = gcd(cur, perm[i]);
                if(cur > i + 1){
                    ok = false;
                    break;
                }
            }
            if(ok){
                cout << "Yes" << "\n";
            } else {
                cout << "No" << "\n";
            }
        }
    }
    return 0;
}
