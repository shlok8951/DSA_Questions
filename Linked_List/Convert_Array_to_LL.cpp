/*
Problem -> Given a arry convert it into  the Linked List.
 */

#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
       int data;
       Node *next;

       Node(int data1, Node* next1){
        data = data1;
        next = next1;
       }

       Node(int data1){
        data =  data1;
        next = nullptr;
       }

};

int main(){
    int arr[5]= {10,20,30,40,50};
    Node * head = new Node(arr[0]);
    Node *tail = head;
    for(int i =1;i<=5;i++){
        Node *temp = new Node(arr[i]);
        tail->next = temp;
        tail = tail->next;
    }
    Node *temp = head;
    while(temp->next!=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

}
