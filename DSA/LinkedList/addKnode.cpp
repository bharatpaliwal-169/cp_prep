//add last k nodes to start of the link list eg 123 k=1 op -> 312. 

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
  int temp = 0;
  if(head == NULL )return 0;
  temp = 1 + length(head->next);
  return temp;
}

Node* addK(Node* &head,int k){
  Node* tail = head;
  Node* newHead= NULL;
  Node* newTail;
  int l = length(head);
  k = k%l; //if k > l;
  int count = 1;
  while(tail->next!= NULL){
    if(count == l-k){
      newTail = tail;
    }
    if(count == l-k+1){
      newHead = tail;
    }
    tail = tail->next;
    count++;
  }
  
  newTail->next = NULL;
  tail->next = head;

  return newHead;
}

void insert(Node* &head,int value) {
  Node* newNode = new Node(value);
  if(head == NULL){
    head = newNode;
    return;
  }
  Node* oldNode = head;
  while(oldNode->next != NULL){
    oldNode = oldNode->next;
  }
  oldNode->next = newNode;
}
void display(Node* head){
  Node* temp = head;
  while(temp != NULL) {
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main(){
  Node* head = NULL;
  insert(head,1);
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,5);
  insert(head,6);
  display(head);
  Node* nHead = addK(head,3);
  display(nHead);
  return 0;
}
