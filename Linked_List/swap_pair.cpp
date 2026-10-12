/*
Problem-> Given a List swap the pairs>
  */


class Solution {
public:
    void reverse(ListNode* head){
        if(head==nullptr|| head->next==nullptr)return;
            ListNode * temp = head;
            ListNode * t2 = head->next;
            t2->next = temp;
            temp->next= nullptr;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode *temp = head;
        ListNode *pre = nullptr;
        ListNode *nextNode = nullptr;
        while(temp!=nullptr){
             ListNode* kth = temp->next;
             if(kth==nullptr){
                if(pre)
                   pre->next = temp;
                break;
             }
             nextNode = kth->next;
             kth->next = nullptr;
             reverse(temp);
             if(temp==head){
                head = kth;
             }else{
                pre->next = kth;
             }
             pre = temp;
             temp = nextNode;
        }
        return head;
    }
};
