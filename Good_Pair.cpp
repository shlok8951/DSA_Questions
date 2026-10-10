/*
Problem -> given an array of integers find the no of good pair.
Good Pair = a pair in which arr[i] == arr[j] where i<j;
*/

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int cnt =0;
        map<int,int> res;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(res.find(nums[i])==res.end()){
                res[nums[i]] = 1;
            }else{
                cnt = cnt +res[nums[i]];
                res[nums[i]]++;
            }
        }
        return cnt;
        
    }
};
