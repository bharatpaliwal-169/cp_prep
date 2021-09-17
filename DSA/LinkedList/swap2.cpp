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

Node* swap2(Node* &head){
  Node* tmp = head;
  while(tmp and tmp->next){
    swap(tmp->data, tmp->next->data);
    tmp = tmp->next->next;
  }
  return head;
}

void swap22(Node* &head){
  if(!head or !head->next) return;
  swap(head->data,head->next->data);
  swap2(head->next->next);
}

void display(Node* head){
  Node* temp = head;
  while(temp!=NULL){
    cout << temp->data << "-> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
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
int main()
{
  Node* head = NULL;

  insert(head,1);
  insert(head,4);
  insert(head,3);
  insert(head,2);
  insert(head,5);
  display(head);
  swap2(head);
  display(head);
  return 0;
}
