/*
I start the linked List and now i understand the complete memory alloctaion of the nodes and the value.
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
  Node *temp = new Node(10);
  cout<<temp->data<<endl;
  cout<<temp->next<<endl;
  cout<<temp<<endl;
  cout<<&temp<<endl;
  cout<<(*temp).data<<endl;
  cout<<(*temp).next<<endl;
  cout<<&((*temp).data)<<endl;
  cout<<&((*temp).next)<<endl;
}


/*
Output -> 10
0
0xbcce66aba2b0
0xffffc0fb1558
10
0
0xbcce66aba2b0
0xbcce66aba2b8
 */
