#include<bits/stdc++.h>
using namespace std;

//----------------
// | data | next |
//----------------
class Node{
  public:
    int data;
    Node* next;
};


//NOTE : Its always safe to store node in temp so that it may not be null for some other functions.
void printList(Node* node) {
  Node* temp = node;
  while(temp != NULL){
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout << "\n";
}
/*
    head         second         third
  +---+---+    +---+---+    +----+----+
  | 1 | o----->| 2 | o-----> | 3 | # |
  +---+---+    +---+---+    +----+----+     */

int main(){
  Node* head = NULL;
  Node* second = NULL;
  Node* third = NULL;

  //allocate nodes to heap
  head = new Node();
  second = new Node();
  third = new Node();

  //assign data to node and assign next node.
  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  //transversal of list of nodes.
  printList(head);
  return 0;
}
