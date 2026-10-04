/*
Problem -> Given a sorted List Remove the duplicates from it.
 */


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)return nullptr;
        ListNode *pre = head;
        ListNode *tail = head;
        tail = tail->next;
        while(tail){
            if(tail->val==pre->val){
                pre->next = tail->next;
                tail = pre->next;
            }else{
                pre = pre->next;
                tail=tail->next;
            }
        }
        return head;
        
    }
};
