/*
Problem -> given a linked list insert the GCD of two no.*/


class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *t1 = head;
        ListNode *t2  =head->next;
        while(t2){
            ListNode *x = new ListNode(gcd(t1->val, t2->val));
            x->next = t2;
            t1->next = x;
            t1 = t2;
            t2 = t2->next;
        }
        return head;
        
    }
};
