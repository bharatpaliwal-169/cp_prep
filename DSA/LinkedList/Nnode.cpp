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

int length(Node* head){
  int count = 0;
  Node* temp = head;
  while(temp != NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

int Nnode(Node* head,int position){
  Node* temp = head;
  int count = 1;
  while(temp != NULL){
    if(count == position){
      return temp->data;
    }
    count++;
    temp = temp->next;
  }
  return -1;
}

int NnodeRec(Node* head,int position,int count){
  if(head == NULL) return -1;
  if(count == position) return head->data;
  return NnodeRec(head->next,position,count+= 1);
}

int GetNth(struct Node* head, int n)
{
    if (head == NULL)
        return -1;
    if (n == 0)
        return head->data;
    return GetNth(head->next, n - 1);
}

int NnodeLast(Node* head,int position){
  int n = length(head);
  Node* temp = head;
  while(temp!=NULL){
    if(n == position) return temp->data;
    n--;temp = temp->next;
  }
  return -1;
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

  insertAtLast(head,12);
  insertAtLast(head,222);
  insertAtLast(head,302);
  insertAtLast(head,402);
  insertAtLast(head,500);
  printList(head);
  cout << Nnode(head,3) << endl;
  cout << NnodeRec(head,3,1) << endl;
  cout << NnodeLast(head,2) << endl;

  return 0;
}
