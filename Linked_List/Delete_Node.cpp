/*
Problem -> Given a Linked list and the liat of elments delete the node which have the value inn the given array from the Linked List.
  */


class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> st;
        for(int i =0;i<nums.size();i++)st.insert(nums[i]);
        ListNode *dummy = new ListNode(-1);
        dummy->next =  head;
        ListNode* pre = dummy;
        ListNode *temp = head;
        while(temp){
           if(st.find(temp->val)==st.end()){
            pre->next = temp;
            pre=pre->next;
           }else pre->next = nullptr;
           temp = temp->next;
        }
        return dummy->next;
    }
};
