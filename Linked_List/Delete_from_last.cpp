/*
Problem-> Given a linked list and a no . delete the node from the last n.
*/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* fast = temp;
        ListNode* slow = temp;
        for(int i =0;i<n;i++){
            fast=fast->next;
        }
        while(fast!=nullptr && fast->next!=nullptr){
            fast=fast->next;
            slow = slow->next;
        }
        ListNode* del = slow->next;
        slow->next = slow->next->next;
        delete(del);
        ListNode* newhead = temp->next;
        return newhead;
    }
};
