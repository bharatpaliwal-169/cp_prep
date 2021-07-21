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
  printList(head);
  return 0;
}
