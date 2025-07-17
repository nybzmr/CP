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

void solve() {
    int n, box_width, w;
    cin >> n >> box_width;

    vector<int> counts(20, 0);
    fr(n) {
        cin >> w;
        counts[log2(w)]++;
    }

    int height = 1, space_left = box_width;

    fr(n) {
        int largest = -1;
        for (int size = 19; size >= 0; size--) {
            if (counts[size] && (1 << size) <= space_left) {
                largest = size;
                break;
            }
        }

        if (largest == -1) {
            height++;
            space_left = box_width;
            for (int size = 19; size >= 0; size--) {
                if (counts[size] && (1 << size) <= space_left) {
                    largest = size;
                    break;
                }
            }
        }

        counts[largest]--;
        space_left -= (1 << largest);
    }

    cout << height nl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
