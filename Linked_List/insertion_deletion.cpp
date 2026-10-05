/*
Today i understand the insertion and deletion from a linked list from anywhere fromfirst ,last or a sepecific position.
 */

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
       int data;
       Node* next;

       Node(int data1, Node* next1){
        data = data1;
        next = next1;
       }

       Node(int data1){
        data = data1;
        next =nullptr;
       }
};

Node* addFirst(Node* head,int val){
    if(head==nullptr)return new Node(val);
    Node* temp = new Node(val);
    temp->next = head;
    return temp;
}

Node* addEnd(Node *head ,int val){
    if(head==nullptr)return new Node(val);
    Node *temp = head;
    while(temp->next!=nullptr){
        temp =  temp->next;
    }
    Node *node = new Node(val);
    temp->next = node;
    return head;
}

Node* addPos(Node *head,int pos,int val){
    if(head==nullptr && pos==1)return new Node(val);
    if(pos==1){
        return addFirst(head,val);
    }
    int count=0;
    Node *temp = head;
    while(temp){
        count++;
        if(count==pos-1){
          break;
        }

        temp = temp->next;
    }
    if(count==pos-1){
        Node *node = new Node(val);
        node->next = temp->next;
        temp->next = node;
        
    }
    return head;
}

Node* delFirst(Node *head){
    if(head==nullptr)return nullptr;
    Node *temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;
    return head;
}

Node* delEnd(Node *head){
    if(head==nullptr)return nullptr;
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    Node *temp = head;
    while(temp->next->next!=nullptr){
        temp = temp->next;
    }
    Node *node = temp->next;
    temp->next = nullptr;
    delete node;;
    return head;
}

Node* delPos(Node* head , int pos){
    if(head==nullptr)return nullptr;
    if(pos==1){
        Node *temp =head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        return head;
    }
    Node *temp = head;
    int count =0;
    while(temp){
        count++;
        if(count==pos-1)break;
        temp = temp->next;

    }
    if(count==pos-1){
        Node *node = temp->next;
        temp->next  = node->next;
        node->next = nullptr;
        delete node;
    }
    return head;

}

int main(){

}
