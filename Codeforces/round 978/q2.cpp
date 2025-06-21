
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        long long arr[n];
       long long sum=0;
        for (long long i = 0; i < n; i++)
        {
           cin>>arr[i];
        }

          for (long long i = 0; i < n; i++)
        {
           sum+= arr[i];
        }
        long long mx=*max_element(arr,arr+n);

        long long add=0;
        if (sum%x!=0)
        {
            add++;
        }
        

     
        if (mx <= sum/x)
        {
            cout<< (sum/x )+add<<endl;
        }
        else{
            cout<<mx<<endl;
        }

        
        
    }
    return 0;
}
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// long long calculateTotalSum(const vector<long long>& cars) {
//     long long total = 0;
//     for (auto &carCount : cars) {
//         total += carCount;
//     }
//     return total;
// }


// long long findMinCustomers(long long totalCars, long long maxCarsPerCustomer, long long maxModelCars) {
//     long long customerCount = totalCars / maxCarsPerCustomer;
//     if (totalCars % maxCarsPerCustomer != 0) customerCount++; 
//     if (maxModelCars > customerCount) return maxModelCars;     
//     return customerCount;                                      
// }

// int main() {
//     long long testCases;
//     cin >> testCases;

//     while (testCases--) {
//         long long numModels, maxBuy;
//         cin >> numModels >> maxBuy;

//         vector<long long> carModels(numModels);

        
//         for (long long i = 0; i < numModels; ++i) {
//             cin >> carModels[i];
//         }

        
//         long long totalCars = calculateTotalSum(carModels);
//         long long maxModelCars = *max_element(carModels.begin(), carModels.end());

        
//         long long result = findMinCustomers(totalCars, maxBuy, maxModelCars);

       
//         cout << result << endl;
//     }

//     return 0;
// }
