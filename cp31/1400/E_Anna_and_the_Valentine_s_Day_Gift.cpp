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

int countTrailingZeros(int num) {
    int count = 0;
    while (num % 10 == 0 && num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

string reverseDigits(string s) {
    reverse(s.begin(), s.end());
    size_t pos = s.find_first_not_of('0');
    if (pos != string::npos) {
        s = s.substr(pos);
    } else {
        s = "0";
    }
    return s;
}

bool canSashaWin(vector<string> nums, int m) {
    sort(nums.begin(), nums.end(), [](const string& a, const string& b) {
        return a + b > b + a;
    });
    string maxNum;
    for (const string& s : nums) {
        maxNum += s;
    }
    if (m == 0) {
        return maxNum != "0";
    }
    string tenPowM = "1" + string(m, '0');
    if (maxNum.length() > tenPowM.length()) {
        return true;
    } else if (maxNum.length() < tenPowM.length()) {
        return false;
    } else {
        return maxNum >= tenPowM;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        map<int, vector<int>, greater<int>> mp;
        for (int num : v) {
            int tz = countTrailingZeros(num);
            mp[tz].push_back(num);
        }

        vector<int> newV;
        for (auto &entry : mp) {
            vector<int> &numbers = entry.second;
            for (size_t i = 0; i < numbers.size(); ++i) {
                if (i % 2 == 0) { 
                    int num = numbers[i];
                    while (num % 10 == 0 && num != 0) {
                        num /= 10;
                    }
                    newV.push_back(num);
                } else {
                    newV.push_back(numbers[i]);
                }
            }
        }

        vector<string> strV;
        for (int num : newV) {
            strV.push_back(to_string(num));
        }

        bool sashaWins = canSashaWin(strV, m);
        cout << (sashaWins ? "Sasha" : "Anna") << '\n';
    }

    return 0;
}