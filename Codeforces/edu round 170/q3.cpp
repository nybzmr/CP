#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int totalCards, maxDistinct;
        cin >> totalCards >> maxDistinct;

        vector<int> cards(totalCards);
        unordered_map<int, int> cardFrequency;

        for (int i = 0; i < totalCards; i++) {
            cin >> cards[i];
            cardFrequency[cards[i]]++;
        }

        vector<int> uniqueCards;
        for (const auto& entry : cardFrequency) {
            uniqueCards.push_back(entry.first);
        }

        sort(uniqueCards.begin(), uniqueCards.end());

        int left = 0, maxTaken = 0, currSum = 0, distinctInWindow = 0;

        for (int right = 0; right < uniqueCards.size(); right++) {
            currSum += cardFrequency[uniqueCards[right]];
            distinctInWindow++;

            while (distinctInWindow > maxDistinct || (right > left && uniqueCards[right] != uniqueCards[right - 1] + 1)) {
                currSum -= cardFrequency[uniqueCards[left]];
                distinctInWindow--;
                left++;
            }

            maxTaken = max(maxTaken, currSum);
        }

        cout << maxTaken << "\n";
    }

    return 0;
}
