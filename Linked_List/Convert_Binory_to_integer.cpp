/*
Problem -> Given a linked list of binaory represantation of number return the is integer value.
 */


class Solution {
public:
    int result=0;
    int a = 1;
    void check(ListNode* head){
        ListNode *temp  = head;
        if(temp==nullptr)return ;
        check(temp->next);
        if(temp->val==1) result = result+a;
         a = a*2;
    }
    int getDecimalValue(ListNode* head) {
        check(head);
        return result;  
    }
};
