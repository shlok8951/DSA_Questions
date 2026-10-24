/*
Problem -> Given the array of numbers find the maximum average of lenght k.
  */

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum  = 0;
        int  j =0;
        int i =0;
        while(j<k){
            sum = sum+nums[j];
            j++;
        }
        double max_sum = sum;
        while(j<nums.size()){
            sum = sum-nums[i]+nums[j];
            max_sum = max(max_sum,sum);
            i++;
            j++;
        }
        return max_sum/k; 
    }
};
