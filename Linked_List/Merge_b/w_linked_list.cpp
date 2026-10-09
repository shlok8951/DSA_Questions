/*
Problem -> Given the Two linked list and the a ,b replave the from a to b in list1 by comple list2.
 */

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        for (int i = 1; i < a; i++)
            temp = temp->next;
        ListNode* last = temp->next;
        temp->next = list2;
        for (int i = a; i < b; i++)
            last = last->next;

        ListNode* tail = list2;
        while (tail->next != nullptr)
            tail = tail->next;
        tail->next = last->next;
        return list1;
    }
};
