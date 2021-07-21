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


Node* reverseK(Node* head,int k){
  Node* prev = NULL;
  Node* current = head;
  Node* next;
  int count=0;
  //iterative reversal of first k node
  while(current!= NULL && count < k){
    next = current->next;
    current->next = prev;
    prev = current;current = next;
    count++;
  }

  //recursive call for rest of list
  if(next != NULL){
    head->next = reverseK(next,k);
  }

  return prev;
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
  insertAtLast(head,6);
  printList(head);
  Node* newHead = reverseK(head,2);
  printList(newHead);
  return 0;
}
