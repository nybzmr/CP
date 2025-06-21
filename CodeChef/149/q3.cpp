#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll k = 0;
        ll l = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] != s[i + 1])
            {
                k++;
            }
            else
            {
                l++;
            }
        }

        ll score = (l * k);
        score += (k * (k - 1LL)) / 2LL;
        cout<<score<<endl;
    }

    return 0;
}
