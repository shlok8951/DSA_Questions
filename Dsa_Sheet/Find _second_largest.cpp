/*
Problem -> Given an Array find the secend largest if exist else return -1.
  */

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int l1 = -1;
        int l2 = -1;
        for(int i =0;i<arr.size();i++){
                if(arr[i]>l1){
                    l2 = l1;
                    l1 = arr[i];
                }
                if(arr[i]>l2 && arr[i]<l1){
                    l2 = arr[i];
                }
        }
        return l2;
        
    //     int n = arr.size();
    //     sort(arr.begin(),arr.end());
    //     int i = n-2;
    //     int largest = arr[n-1];
    //   while(i>=0){
    //       if(arr[i]<largest)return arr[i];
    //       i--;
    //   }
    //   return -1;
    }
};
