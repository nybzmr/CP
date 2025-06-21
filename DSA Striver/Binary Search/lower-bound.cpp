// Author: Nayaab Zameer
#include <bits/stdc++.h>
using namespace std;

int bs(int l, int u, vector<int> &nums, int x)
{
  if (l > u) 
    return u;
  int mid = (l + u) / 2;

  if (x == nums[mid])
  {
    return mid;
  }
  else if (x > nums[mid])
  {
    return bs(mid + 1, u, nums, x);
  }
  else
  {
    return bs(l, mid - 1, nums, x);
  }
}

int lowerBound(vector<int> &nums, int x)
{
  int l = 0;
  int u = nums.size() - 1;
  int ans = bs(l, u, nums, x);
  while (nums[ans]==nums[ans-1])
  {
    ans--;
  }
  return ans;
}

int main()
{
  vector<int> nums = {2, 4, 5, 7, 8, 13, 24};
  int x = 6;
  int ans = lowerBound(nums, x);
  cout << ans;
  return 0;
}
