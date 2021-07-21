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

int Length(Node* head){
  if(head == NULL )return 0;
  int temp = 1 + Length(head->next);
  return temp;
}

int middle(Node* head){
  int n = Length(head);
  int mid = (n%2==0)? n/2 : (n-1)/2;
  int count = 0;
  Node* temp = head;
  while(temp!= NULL){
    if(count==mid)return temp->data;
    count++;temp = temp->next;
  }
  return -1;
}

int main(){
  Node* head = NULL;
  insertAtLast(head,1);
  insertAtLast(head,2);
  insertAtLast(head,3);
  insertAtLast(head,4);
  insertAtLast(head,5);
  printList(head);
  cout << Length(head) << endl;
  cout << middle(head) << endl;
  return 0;
}
