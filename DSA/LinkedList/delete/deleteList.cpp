#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
};

void deleteList(Node* &head) {
  Node*  current = head;
  Node* temp = NULL;

  while(current != NULL) {
    temp = current->next;
    free(current);
    current = temp;
  }

  head = NULL;
  cout << "LIST IS DELETED" << endl;
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
  deleteList(head);
  printList(head);
  return 0;
}
