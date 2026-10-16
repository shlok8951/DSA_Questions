/*
Problem -> Given a linked list and a value , remove the node that value is equal to the given value .
*/


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr)return head;
        ListNode *dummy = new ListNode(-1);
        ListNode *pre = dummy;
        ListNode* temp =head;
        while(temp){
            if(temp->val==val){
                temp = temp->next;
                pre->next = nullptr;
            }
            else{
                pre->next = temp;
                pre = pre->next;
                temp =temp->next;
            }
        }
        return dummy->next;

        
    }
};
