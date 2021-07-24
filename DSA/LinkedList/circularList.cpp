//circular linked list
#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int data;
  node* next;
  node(int value){
    data = value;
    next = NULL;
  }
};


void insertAtHead(node* head,int value){
  node* n = new node(value);
  node* temp = head;
  if(head== NULL)
  {
    n->next = n;
    head = n;
    return ;
  }
  while(temp->next != NULL)temp = temp->next;
  temp->next = n;
  n->next = head;
  head = n;
}
void insertAtLast(node* head,int value){
  node* n = new node(value);
  node* temp = head;

  if(head == NULL){
    insertAtHead(head,value);
    return ;
  } 
  while(temp->next != head) temp = temp->next;
  temp->next = n;
  n->next = head;
}

void print(node* head){
  node* temp = head;
  do{
    cout << temp->data << " -> ";
    temp = temp->next;
  }while(temp != head);

}

void deleteHead(node* head){
  node* temp = head;
  while(temp->next != head) temp = temp->next;
  node* todel = head;
  temp->next = head->next;
  head = head->next;
  delete todel;
}

void deleteNode(node* head,int pos){
  node* temp = head;
  int count = 1;
  if(pos == 1){
    deleteHead(head);
    return;
  }
  while(count != pos-1){
    temp = temp->next;
    count++;
  }
  node* todel = temp->next;
  temp->next = temp->next->next;
  delete todel;
}

int main(){
  return 0;
}