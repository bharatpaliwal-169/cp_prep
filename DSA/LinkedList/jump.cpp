// if 2 1 4 1  -> 2 4 
// if 1 1 1  -> 1  1 1
//if 1 2 1 -> 1 2
// You are given a singly linked list node containing positive integers. 
// Return the same linked list where every node's next points to the node val nodes ahead. 
// If there's no such node, next should point to null.
#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
    int data;
    Node* next;
    Node(int value){
      data = value;
      next = NULL;
    }
};


//idea is to eliminate the nodes that are not in the count-> value of the node.
Node* jump(Node* node){
  Node* temp = node;
  Node* t = temp;
  while(temp != NULL){
      int count = temp ->data;
      while(count--){
          if(t->next) t = t->next;
          else{
              t= NULL;
              break;
          } 
      }
      temp->next = t;
      temp = temp->next;
  }

  return node;
}

void printList(Node* node) {
  Node* temp = node;
  while(temp != NULL){
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout <<"NULL" << "\n";
}

void insertAtLast(Node* &head , int value)
{
  Node* newNode = new Node(value);
  if(head == NULL ){
    head = newNode;
    return;
  }

  Node* temp = head;
  while(temp->next != NULL)temp = temp->next;
  temp->next = newNode;
}
int main(){
  Node* head = NULL;
  insertAtLast(head,1);
  insertAtLast(head,2);
  insertAtLast(head,3);
  insertAtLast(head,4);
  insertAtLast(head,5);
  insertAtLast(head,50);
  printList(head);
  Node* newNode = jump(head);
  return 0;
}
