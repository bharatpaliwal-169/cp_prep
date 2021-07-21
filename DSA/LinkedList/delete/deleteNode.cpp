#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};


void deleteAtHead(Node* &head){
  Node* toDelete = head;
  head = head->next;
  delete toDelete; // if not this line then memory leak will occur
}

void deleteNode(Node* node,int key){

  //case 1: if list is already empty
  if(node == NULL) return;

  //case 2: is only one node is present
  if(node->next == NULL){
    deleteAtHead(node);
    return;
  }

  Node* temp = node;
  while(temp->next->data != key){
    temp = temp->next;
  }
  Node* deletedNode = temp->next;
  temp->next = temp->next->next;// n-1 node is now linked to n+1 node , hence n is deleted;
  delete deletedNode;
}

void insert(Node* &head , int value)
{
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = NULL;
  if(head == NULL ){
    head = newNode;
    return;
  }

  Node* temp = head;
  while(temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
}

void printList(Node* node) {
  Node* temp = node;
  while(temp != NULL){
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout <<"NULL" << "\n";
}

int main(){
  Node* head = NULL;
  insert(head,1);
  insert(head,0);
  insert(head,10);
  insert(head,2);
  insert(head,34);
  insert(head,1);
  printList(head);
  deleteNode(head,34);
  printList(head);
  deleteNode(head,1);
  //case 0 : to delete the head node itself
  deleteAtHead(head);
  printList(head);
  return 0;
}
