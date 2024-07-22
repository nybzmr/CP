#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=n-1;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+m);
    int flag =1;
    while (flag==arr[flag-1])
    {
        flag++;
        continue;
    }
    cout<< flag <<endl;
    
    return 0;
}