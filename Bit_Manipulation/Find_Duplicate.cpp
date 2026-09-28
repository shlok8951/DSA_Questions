/*

Problem-> Given a array of size n+1 in which 1 to n numbrs and one num isdupilicate find number without use extra space, or not changes in the array.
  */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int slow =0;
        int fast = 0;
      do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }  while(slow!=fast);
        slow = 0;

        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;

    }
};
