#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

void connectexVertex(int **arr, int n) {
    vector<bool> isTypeA(n, false);
    for (int u = 0; u < n; u++) {
        vector<bool> visited(n, false);
        visited[u] = true;
        int components = 0;
        for (int i = 0; i < n; i++) {
            if (visited[i]) continue;
            components++;
            queue<int> q;
            q.push(i);
            visited[i] = true;
            while (!q.empty()) {
                int node = q.front(); q.pop();
                for (int j = 0; j < n; j++) {
                    if (arr[node][j] == 1 && !visited[j]) {
                        visited[j] = true;
                        q.push(j);
                    }
                }
            }
        }
        if (components >= 2) {
            isTypeA[u] = true;
        }
    }

    vector<int> typeB;
    for (int i = 0; i < n; i++) {
        if (isTypeA[i]) continue;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1 && isTypeA[j]) {
                typeB.push_back(i);
                break;
            }
        }
    }

    for (int i = 0; i < typeB.size(); i++) {
        if (i > 0) cout << " ";
        cout << typeB[i];
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    int **arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        string cleaned = "";
        for (char c : line) {
            if (c != ' ') cleaned += c;
        }
        for (int j = 0; j < n; j++) {
            if (j < cleaned.length()) {
                arr[i][j] = cleaned[j] - '0';
            } else {
                arr[i][j] = 0;
            }
        }
    }

    connectexVertex(arr, n);

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}