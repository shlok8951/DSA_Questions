/*
Problem -> Given A sorted linked list remove the nodes that have same values.
  */


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode *dummy= new ListNode(-1);
        ListNode *pre = dummy;
        ListNode* t1 = head;
        ListNode* t2 = head->next;
        while(t2){
            if(t1->val!=t2->val){
                pre->next = t1;
                pre = pre->next;
                t1 = t2;
                t2 = t2->next;
                pre->next = nullptr;
            }else{
                while(t2!=nullptr && t1->val==t2->val) t2 = t2->next;
                t1 = t2;
                if(t2==nullptr)break;
                 t2 = t2->next;
            }
        }
        if(t1!=nullptr)pre->next  = t1;
        return dummy->next; 
    }
};
