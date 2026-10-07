/*
Problem -> Given the two llinked list that are the reverse no add then and tereun the Node of rever sum.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:  
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry = 0;
       ListNode *newhead=nullptr;
       ListNode *temp;
       int a,b,sum;
       while(l1 || l2){
        if(l1==nullptr)a=0;
        else a = l1->val;
        if(l2==nullptr)b=0;
        else b = l2->val;
        sum = a+b+carry;
        ListNode *node = new ListNode(sum%10);
        carry = sum/10;
        if(newhead==nullptr){
            newhead = node;
            temp = newhead;
        }else{
            temp->next = node;
            temp = temp->next;
        }
        if(!(l1==nullptr))
           l1=l1->next;
        if(!(l2==nullptr))   
            l2 = l2->next;
       }
       if(carry>0){
        ListNode* node = new ListNode(carry);
        temp->next = node;
       }
       return newhead;  
    }
};
