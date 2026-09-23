/*
Problem-> Given a array with 2*n elements return true if the pairs are created by them both elements are same in pair.
 */

class Solution {
public:
    bool divideArray(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=1;i<nums.size();i=i+2){
        if(nums[i]!=nums[i-1])return false;
       }
       return true;
        
    }
};
