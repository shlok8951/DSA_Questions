/*
Problem-> Given a Linked List that show the digits of the number .return the head of the number after convert number into double of number.
 */


class Solution {
public:
    int carry = 0;
    ListNode* func(ListNode* head) {
        if (head->next == nullptr) {
            int res = head->val * 2 + carry;
            head->val = res % 10;
            carry = res / 10;
            return head;
        }
        func(head->next);
        int res = head->val * 2 + carry;
        head->val = res % 10;
        carry = res / 10;
        return head;
    }

    ListNode* doubleIt(ListNode* head) {
        ListNode* node = func(head);
        if (carry > 0) {
            ListNode* temp = new ListNode(carry);
            temp->next = node;
            return temp;
        }
        return node;
    }
};
