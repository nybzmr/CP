

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void max_sum(int n, vector<int> &arr)
{
  long long max_sum = arr[0];
  long long current_sum = arr[0];
  int temp = arr[0];
  for (int i = 1; i < n; ++i)
  {
    if ((arr[i] > 0 && arr[i - 1] < 0) || (arr[i] < 0 && arr[i - 1] > 0))
    {
      current_sum += arr[i];
      max_sum = current_sum;
      temp=arr[i];
    }
    else
    { 
      current_sum-=temp;
      current_sum += arr[i];
      if (current_sum>max_sum)
      {
        max_sum=current_sum;
        temp=arr[i];
      }
      else{
        current_sum-=arr[i];
        current_sum+=temp;
      }
      
    }
  }

  max_sum = max(max_sum, current_sum);

  cout << max_sum << endl;
}

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
      cin >> arr[i];
    }
    max_sum(n, arr);
  }

  return 0;
}
