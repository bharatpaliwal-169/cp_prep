//WAP to detect and remove a loop in linked list
#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;
  Node(int value){
    data = value;next = NULL;
  }
};
Node* merge(Node* head1,Node* head2){
  Node* result = new Node(-1);
  Node* ptr1 = head1;
  Node* ptr2 = head2;
  Node* ptr3 = result;

  while(ptr1  && ptr2){
    if(ptr1->data < ptr2->data){
      ptr3->next = ptr1;
      ptr1 = ptr1->next;
    }
    else{
      ptr3->next = ptr2;
      ptr2 = ptr2->next;
    }
    ptr3 = ptr3->next;
  }
  while(ptr1){
    ptr3->next = ptr1;
    ptr1 = ptr1->next;
    ptr3 = ptr3->next;
  }
  while(ptr2){
    ptr3->next = ptr2;
    ptr2 = ptr2->next;
    ptr3 = ptr3->next;
  }

  return result;
}

Node* mergeRecursive(Node* head1, Node* head2){
  if(head1 == NULL) return head2;
  if(head2 == NULL) return head1;

  Node* result;
  if(head1->data < head2->data){
    result = head1;
    result->next = mergeRecursive(head1->next , head2);
  }
  else{
    result = head2;
    result->next = mergeRecursive(head1 , head2->next);
  }

  return result;
}

void printList(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

void insert(Node* &head,int value){
  Node* newNode = new Node(value);
  if(head == NULL)
  {
    head = newNode;
    return ;
  }
  Node* temp = head;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  temp->next  = newNode;
}

int main(){
  Node* head = NULL;
  insert(head,1);
  insert(head,3);
  insert(head,7);
  insert(head,9);
  printList(head);

  Node* head2 = NULL;
  insert(head2,2);
  insert(head2,4);
  insert(head2,5);
  insert(head2,8);
  printList(head2);

  Node* newHead = mergeRecursive(head,head2);
  printList(newHead);

  return 0;
}
