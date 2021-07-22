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


void makeLoop(Node* head,int pos){
  Node* temp = head;
  Node* startNode;
  int count = 1;

  while(temp->next != NULL){
    if(count == pos)startNode = temp;
    count++;temp = temp->next;
  }
  temp->next = startNode;
}

//Floyed algorithm

bool detectLoop(Node* head){
  Node* fast = head;
  Node* slow = head;

  while(fast!=NULL && fast->next!= NULL){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast) return true;
  }
  return false;
}

void removeLoop(Node* head){
  Node* fast = head;
  Node* slow = head;
  while(slow != fast){
    slow = slow->next;
    fast = fast->next->next;
  }
  fast = head;
  while(slow->next != fast->next){
    slow = slow->next;
    fast = fast->next;
  }
  slow->next = NULL;
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
  insert(head,2);
  insert(head,3);
  insert(head,4);
  insert(head,6);
  insert(head,7);
  insert(head,8);
  insert(head,9);
  printList(head);
  cout << detectLoop(head) << endl;
  makeLoop(head,4);
  cout << detectLoop(head) << endl;
  removeLoop(head);
  cout << detectLoop(head) << endl;
  return 0;
}
