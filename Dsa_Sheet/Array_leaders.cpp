/*
Problem -> Given an Array of integers find the all leaders of array a leader of the array that not have any larger then element at its right side.
  */

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int i =arr.size()-1;
        vector<int> result;
        int max_ele = arr[i];
        while(i>=0){
            if(arr[i]>=max_ele){
                result.push_back(arr[i]);
                max_ele = arr[i];
            }
            i--;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
