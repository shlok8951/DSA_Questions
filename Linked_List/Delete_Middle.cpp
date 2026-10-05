/*
Problem -> Given a Linked List remove the It's middle node.
  */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return nullptr;
        ListNode* slow = head;
        ListNode *fast = head;
        ListNode* temp;

        while(fast!=nullptr && fast->next!=nullptr){
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = slow->next;
        return head;
        
    }
};
