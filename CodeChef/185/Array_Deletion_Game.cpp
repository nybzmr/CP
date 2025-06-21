#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while(T--){
        int n; 
        cin >> n;
        int m = 2*n;
        vector<ll> a(m);
        for(int i = 0; i < m; i++)
            cin >> a[i];

        // max-heap of (value, idx)
        priority_queue<pair<ll,int>> pq;
        for(int i = 0; i < m; i++)
            pq.emplace(a[i], i);

        vector<char> gone(m, 0);
        ll ans = 0;
        int head = 0;  // next index Bob would remove

        auto skip_front = [&](){
            // advance head past any already-removed slots
            while(head < m && gone[head])
                head++;
        };

        // N rounds
        for(int round = 0; round < n; round++){
            // 1) Alice picks the largest still-available
            while(!pq.empty()){
                auto [v, i] = pq.top();
                if(gone[i] || i < head){
                    pq.pop();            // stale entry
                } else {
                    ans += v;           // take it!
                    gone[i] = 1;
                    pq.pop();
                    break;
                }
            }

            // 2) Bob removes the current front
            skip_front();
            if(head < m){
                gone[head] = 1;
                head++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
