/*
Problem -> Given an sorted array find the ranges of continue increment values.
*/

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        int n = nums.size();
        int  i=0,j=0;
        while(j<n){
           if(j+1<n && nums[j+1]==nums[j]+1){
            j++;
           }
           else{
            if(nums[i]==nums[j]){
                result.push_back(to_string(nums[i]));
            }else{
            string a = to_string(nums[i]);
            string b = to_string(nums[j]);
            string ans = a+"->"+b;
            result.push_back(ans);
            }
            i = j+1;
            j++;
           }
        }
         return result; 

    }
        
};
