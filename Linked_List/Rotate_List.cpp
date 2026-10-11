/*
Problem -> Given a list and the k value rotate the element in k times.
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)return head;
        ListNode *tail = head;
        int len = 1;
        while(tail->next !=nullptr){
            tail = tail->next;
            len++;
        }
        if(k%len==0)return head;
        int x = len - (k%len);
        tail->next = head;
        ListNode *temp = head;
        while(x>1){
            temp = temp->next;
            x--;
        }
        head = temp->next;
        temp->next = nullptr;
        return head;


    
        
    }
};
