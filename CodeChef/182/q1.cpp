class Solution {
  public:
   int stockBuySell(vector<int> arr, int n) {
       int mx1=0,mx2=0,mn1=0,mn2=0;
       for (int i = 0; i < arr.size(); i++) {
           if(arr[i]>mx1){
               mx1=arr[i];
           }
           else if(arr[i]<mn1){
              mn1=arr[i];
           }
       }
   }
};
