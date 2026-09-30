/*
Problem-> Given a arry on n size and a integer k , add the values that indext have exject k set bits .
 */
class Solution {
public:

    bool check(int n , int k){
        int count =0;
      //Brain kernighan's algo.
        while(n){
           n &= (n-1);
           count++;
           if(count>k)return false;
        }
        return count==k;
        // while(n>0){
        //     if((n&1)!=0)count++;
        //     if(count>k)return false;
        //     n = n>>1;
        // // }
        // if(count==k)return true;
        // return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            if(check(i,k))sum = sum+nums[i];
        }
        return sum;
        
    }
};
