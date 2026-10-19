/*
Problem -> Given a Linked list in which sone node values are zero so return the LInked list the sum of the node values in b/w zeros.
 */

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *temp = head->next;
        ListNode *dummy = new ListNode(-1);
        ListNode* newhead = dummy;
        int sum =0;
        while(temp){
            if(temp->val==0){
                temp->val  = sum;
                newhead->next = temp;
                newhead = newhead->next;
                sum=0;
              
            }else sum += temp->val;
            temp = temp->next;
        }
        return dummy->next;
    }
};
