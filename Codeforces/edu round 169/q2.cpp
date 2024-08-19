#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define f(i,n) for(long long i=0;i<n;i++)
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l,r,L,R;
        cin>>l>>r>>L>>R;
        if(r<L || R<l ){
            cout<<1<<endl;
            continue;
        }
        int minimum=min(l,L);
        int a=l+L-minimum;
        int maximum=max(r,R);
        int a1=r+R-maximum;
        int ans=0;
        int ld=-1,rd=-1;
        for(int i=minimum;i<=maximum;i++){
            if(i>=a && i<=a1){
                ans++;
                if(ld==-1) ld=i;
                rd=i;
            }
        }
        ans--;
        if(minimum<ld) ans++;
        if(maximum>rd) ans++;
        cout<<ans<<endl; 
        
    }
    return 0;
}