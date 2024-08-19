#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "";

    for (int i = 0; i < s.size(); i++) {
        char lower_char = tolower(s[i]);  // Convert character to lowercase

        // Check if the character is a vowel or 'y'
        if (lower_char == 'a' || lower_char == 'e' || lower_char == 'i' || 
            lower_char == 'o' || lower_char == 'u' || lower_char == 'y') {
            continue;
        } else {
            t += '.';       // Append a period
            t += lower_char;  // Append the lowercase consonant
        }
    }

    cout << t << endl;  // Output the final string
    return 0;
}
