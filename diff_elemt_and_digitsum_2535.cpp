/*
Problem -> Given an array of numbers find the diff blw the element sum and the digit sum.
*/

class Solution {
public:
    int func(int num){
        int n = num;
        int sum =0;
        while(n>0){
            sum += n%10;
            n  =n/10;
        }
        return num-sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++)sum += func(nums[i]);
        return sum;
    }
};
