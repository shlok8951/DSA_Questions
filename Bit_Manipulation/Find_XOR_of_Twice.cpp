/*
Problem -> Given a array in which the no appear either one or two time , Find the Xor that no appear twice in the aaray.
 */

class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n =  nums.size();
        sort(nums.begin(),nums.end());
        int i =1;
        int result = 0;
        while(i<n){
            if(nums[i]==nums[i-1]){
                result = result^nums[i];
                i = i+2;
            }else
              i=i+1;
        }
        return result;
        
        
    }
};
