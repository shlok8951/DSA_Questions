/*
Problem-> Given a List and starting and ending index to reverse.
 */

class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode *temp = head;
        ListNode *pre = nullptr;
        while(temp!=nullptr){
            ListNode *nextNode = temp->next;
            temp->next = pre;
            pre = temp;
            temp = nextNode;
        }
        return pre;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr|| head->next==nullptr || left==right)return head;
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *pre = dummy;
        for(int i=1;i<left;i++){
            pre = pre->next;
        }
        ListNode* rev = pre->next;
        ListNode* curr  = rev;
        for(int i = left;i<right;i++){
            curr = curr->next;
        }
        ListNode *nextNode = curr->next;
        curr->next =nullptr;
        ListNode *x = reverse(rev);
        pre->next = x;
        rev->next = nextNode;
        return dummy->next; 
    }
};
