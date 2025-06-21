// // Author: Nayaab Zameer
// #include <bits/stdc++.h>
// using namespace std;
// #define pi (3.141592653589)
// #define mod 1000000007
// #define pb push_back
// #define is insert
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(x) x.begin(), x.end()
// #define min3(a, b, c) min(c, min(a, b))
// #define min4(a, b, c, d) min(d, min(c, min(a, b)))
// #define rfr(n) for(int i=n-1;i>=0;i--)
// #define rep1(i,a,b) for(long long i=a;i<=b;i++)
// #define fr(n) for(long long i=0;i<n;i++)
// #define nesfr(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
// #define rep(i,a,b) for(long long i=a;i<b;i++)
// #define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
// typedef long long int ll;
// typedef long double ld;
// typedef vector<ll> makellv;
// #define nl << "\n"
// const unsigned int M = 1000000007;
// const int  N = 2e5 + 5 ;

// int main(){
// fast;
// ll t=1;
// cin>>t;
// while(t--)
// {
//    int n;
//    cin>>n;
//    vector <int>v(n) ;
//    vector <int>indo1 ;
//    vector <int>indo0 ;

//    for (int i = 0; i < n; i++)
//    {
//     cin>>v[i];
//     if (v[i]==1)
//     {
//       indo1.push_back(i);
//     }
//     else{
//       indo0.push_back(i);
//     }

//    }
//   int count = sizeof(indo1);
//   for (int i = 1; i < sizeof(indo1); i++)
//   {
//     if (indo1[i]-indo1[i-1]-1<2)
//     {
//       count++;
//     }

//   }
//   for (int i = 0; i < sizeof(indo1); i++)
//   {
//     if (indo1[i]-indo1[i-1]==1)
//     {
//       count++;
//     }

//   }

// }
// return 0;
// }
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int countSubarrays(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> prefixCount;
    int prefixSum = 0, count = 0;

    // Initialize with prefix sum 0 having 1 count
    prefixCount[0] = 1;

    for (int i = 0; i < n; ++i)
    {
        // Treat 1 as +1 and 0 as -1 for easier calculations
        if (arr[i] == 1)
        {
            prefixSum += 1;
        }
        else
        {
            prefixSum -= 1;
        }

        // We need prefixSum > 0 for valid subarray, check for prefixSum - 1 in map
        if (prefixSum > 0)
        {
            count += i + 1; // All subarrays from 0 to i are valid
        }

        // Check how many times (prefixSum - 1) has occurred
        count += prefixCount[prefixSum - 1];

        // Update the prefix sum frequency
        prefixCount[prefixSum]++;
    }

    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        cout << "Number of subarrays: " << countSubarrays(v) << endl;
    }

    return 0;
}

