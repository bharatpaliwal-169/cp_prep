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

void insertAtFirst(Node* &head , int value)
{
  Node* newNode = new Node(value);
  newNode->next = head;
  head = newNode;
}

int main(){
  Node* head = NULL;

  insertAtFirst(head,1);
  insertAtFirst(head,2);
  insertAtFirst(head,3);
  insertAtFirst(head,4);
  printList(head);
  return 0;
}
