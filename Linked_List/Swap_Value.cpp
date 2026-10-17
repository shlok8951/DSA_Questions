/*
Problem - > Give a Linked list and the k no , swap the values of nodes from starting and end of linked list at k position.
*/


class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        for(int i =1;i<k;i++)temp = temp->next;
        ListNode* t1 = temp;
        ListNode* t2 = head;
        while(t1->next!=nullptr){ 
            t1 = t1->next;
            t2 = t2->next;
        }
        swap(temp->val , t2->val);
        return head;
    }
};
