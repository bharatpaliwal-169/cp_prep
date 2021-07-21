#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next= NULL;
  }
};

Node* reverse(Node* &head){
  Node* prv = NULL;
  Node* current = head;
  Node* next;

  while(current!= NULL){
    next = current->next;
    current->next = prv;
    prv = current;
    current = next;
  }
  return prv;
}

Node* reverseRec(Node* &head){
  
  if(head == NULL || head->next == NULL) return head;

  Node* newHead = reverseRec(head->next);
  head->next->next = head;
  head->next = NULL;

  return newHead;
}

void insert(Node* &head,int value){
  Node* n = new Node(value);
  if(head==NULL){
    head = n;return;
  }
  Node* temp = head;
  while(temp->next!=NULL){
    temp = temp->next;
  }
  temp->next = n;
}
void display(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
int main()
{
  Node* head = NULL;

  insert(head,1);
  insert(head,4);
  insert(head,3);
  insert(head,2);
  insert(head,5);
  display(head);
  // Node* newHead = reverse(head);
  // display(newHead);

  Node* newHead = reverseRec(head);
  display(newHead);
  return 0;
}
