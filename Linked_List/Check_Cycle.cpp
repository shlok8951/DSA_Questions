/*
Problem-> Given a Lisked List find the List have cycle or not.
 */


class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)return false;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast!=NULL && fast->next!=NULL){
           slow = slow->next;
           fast=fast->next->next;
          if(slow==fast)return true;
        }
        return false;
        
    }
};
