#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
const int MODULO = 1000000007;

vector<ll> calculatePowersOfTwo(int maxExponent) {
    vector<ll> powers(maxExponent + 1);
    powers[0] = 1;
    for (int i = 1; i <= maxExponent; ++i) {
        powers[i] = (powers[i - 1] * 2) % MODULO;
    }
    return powers;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    vector<int> values_n(testCases);
    for (int i = 0; i < testCases; ++i) {
        cin >> values_n[i];
    }

    vector<int> values_k(testCases);
    int maxExponent = 0;
    for (int i = 0; i < testCases; ++i) {
        cin >> values_k[i];
        if (values_k[i] > maxExponent) {
            maxExponent = values_k[i];
        }
    }

    vector<ll> powerResults = calculatePowersOfTwo(maxExponent);

    for (int i = 0; i < testCases; ++i) {
        cout << powerResults[values_k[i]] << "\n";
    }

    return 0;
}
