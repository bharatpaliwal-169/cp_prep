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

bool isPresent(Node* node,int key){
  Node* current = node;
  while(current != NULL){
    if(current->data == key){
      return true;
    }
    current = current->next;
  }
  return false;
}

void printList(Node* head){
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
  insert(head,0);
  insert(head,3);
  insert(head,-12);
  printList(head);
  cout << isPresent(head,0) << endl;
  cout << isPresent(head,11) << endl;

  return 0;
}