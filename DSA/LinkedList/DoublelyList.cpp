#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* prev;

  Node(int value){
    data = value;
    next = NULL;
    prev= NULL;
  }
};

void insertAtHead(Node* &head,int value){

  Node* newNode = new Node(value);
  newNode->next = head;

  if(head!=NULL)head->prev = newNode;

  head = newNode;

}

void insertAtLast(Node* &head,int value){

  Node* newNode = new Node(value);
  Node* temp = head;

  if(head == NULL){
    insertAtHead(head,value);
    return;
  }
  while(temp->next != NULL){
    temp = temp->next;
  }

  temp->next = newNode;
  newNode->prev = temp;

}

void deleteHead(Node* &head){
  Node* temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
}

void deleteNode(Node* &head,int position){
  Node* temp = head;
  int count = 1;

  if(position == 1){
    deleteHead(head);
    return;
  }

  while(temp!=NULL && count!=position){
    temp = temp->next;
    count++;
  }

  temp->prev->next = temp->next;
  if(temp->next != NULL){
    temp->next->prev = temp->prev;
  }
  delete temp;
}


void display(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << " <--> ";
    temp = temp->next;
  }
  cout <<"NULL" << "\n";
}


int  main(){
  Node* head = NULL;
  insertAtLast(head,1);
  insertAtLast(head,2);
  insertAtLast(head,3);
  insertAtLast(head,4);
  insertAtLast(head,36);
  display(head);
  insertAtHead(head,5);
  display(head);
  deleteNode(head,6);
  display(head);
  return 0;
}
