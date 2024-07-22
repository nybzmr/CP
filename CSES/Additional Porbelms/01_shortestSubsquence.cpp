#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ca = 0, cc = 0, cg = 0, ct = 0;

        // Count the occurrences of each nucleotide
        for (char c : s) {
            if (c == 'A') {
                ca++;
            } else if (c == 'C') {
                cc++;
            } else if (c == 'G') {
                cg++;
            } else if (c == 'T') {
                ct++;
            }
        }

        // Find the minimum count among the nucleotides
        int minseq = min({ca, cc, cg, ct});
        
        // Output the nucleotide with the minimum count
        if (minseq == ca) {
            for (int i = 0; i < ca; i++) {
                cout << 'A';
            }
        } else if (minseq == cc) {
            for (int i = 0; i < cc; i++) {
                cout << 'C';
            }
        } else if (minseq == cg) {
            for (int i = 0; i < cg; i++) {
                cout << 'G';
            }
        } else if (minseq == ct) {
            for (int i = 0; i < ct; i++) {
                cout << 'T';
            }
        }
        
        cout << endl; // Newline after each test case
    }
    return 0;
}