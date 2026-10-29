/*
Problem -> Given an array of size n , it can have from 1 to n numbers and some no are most twice find the twice no.
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        vector<int>ans(n+1,0);
        for(int i =0;i<n;i++){
            if(ans[nums[i]]!=0)
               result.push_back(nums[i]);
            ans[nums[i]]++;
        }
        return result;
    }    
};
