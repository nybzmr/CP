// // Author: Nayaab Zameer 
// #include <bits/stdc++.h>
// using namespace std;
// #define pi (3.141592653589)
// #define mod 1000000007
// #define pb push_back
// #define is insert
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rfr(n) for(int i=n-1;i>=0;i--)
// #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// #define fr(n) for(long long i=0;i<n;i++)
// #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// #define rep(i,a,b) for(long long i=a;i<b;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// typedef long long int ll;
// typedef long double ld;
// typedef vector<ll> makellv;
// #define nl << "\n"
// const unsigned int M = 1000000007;
// const int  N = 2e5 + 5 ;


// int main(){
// fast;
// ll t=1;
// cin>>t;
// while(t--)
// {
//    string s, t;
//    cin>>s;
//    cin>>t;
//    int len=0;
//    int n = s.size();
//    int m = t.size();
//    int k = min(n,m);
//    for (int i = 0; i <k ; i++)
//    {
//       if (s[i]==t[i])
//       {
//         len++;
//       }
//       else{
//         break;
//       }
//    }
      // int seconds =0;
      // seconds+=len;
      // len>0?seconds+=1:seconds+=0;
      // seconds+=s.size()-len;
      // seconds+=t.size()-len;
      // cout<<seconds<<endl;
   
// }
// return 0;
// }
// Author: Nayaab Zameer 
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
typedef long long int ll;

int main() {
    fast;
    ll cases = 1;
    cin >> cases;
    while (cases--) {
        string a, b;
        cin >> a >> b;
        ll size_a = a.size(), size_b = b.size(), common_length = 0;

        for (ll i = 0; i < min(size_a, size_b); i++) {
            if (a[i] == b[i]) {
                common_length++;
            } else {
                break;
            }
        }
         int seconds =0;
      seconds+=common_length;
      common_length>0?seconds+=1:seconds+=0;
      seconds+=size_a-common_length;
      seconds+=size_b-common_length;
      cout<<seconds<<endl;
    }
    return 0;
}
