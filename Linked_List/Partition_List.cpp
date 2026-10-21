/*
Problem-> Given a linked list and a value x ,arrang the list in which all the smaller then x value node come before the node grether or equal to the node.
  */

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==nullptr ||  head->next==nullptr)return head;
        ListNode *dummy = new ListNode(-1);
        ListNode *dummy2 = new ListNode(-1);
        dummy->next =  head;
        ListNode *t1 = dummy;
        ListNode  *s = dummy2;
        while(t1->next!=nullptr){
           if(t1->next->val < x){
            s->next = t1->next;
            s = s->next;
            t1->next = t1->next->next;
            s->next = nullptr;
           }else{
            t1 = t1->next;
           }
        }
        s->next =  dummy->next;
        return dummy2->next;
    }
};
