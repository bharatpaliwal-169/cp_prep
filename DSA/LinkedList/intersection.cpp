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

int length(Node* &head){
  if(head == NULL )return 0;
  int temp = 1 + length(head->next);
  return temp;
}

void makeIntersection(Node* &head1, Node* &head2,int pos){
  Node* temp1 = head1;
  pos--;
  while(pos--){
    temp1 = temp1->next;
  }
  Node* temp2 = head2;
  while(temp2->next){
    temp2 = temp2->next;
  }
  //end of list 2 is pointed to temp1
  temp2->next = temp1;
}

int intersect(Node* &head1, Node* &head2){
  Node* temp1;
  Node* temp2;

  int l1 = length(head1);
  int l2 = length(head2);

  int d = abs(l1 - l2);
  if(l1>=l2){
    temp1 = head1;
    temp2 = head2;
  }
  else{
    temp1 = head2;
    temp2 = head1;
  }

  while(d--){
    temp1 = temp1->next;
  }

  while(temp1 && temp2){
    if(temp1 == temp2){
      return temp1->data;
    }
    temp1 = temp1->next;
    temp2 = temp2->next;
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
  Node* head1 = NULL;
  insertAtLast(head1,1);
  insertAtLast(head1,2);
  insertAtLast(head1,3);
  insertAtLast(head1,4);
  insertAtLast(head1,5);
  printList(head1);

  Node* head2 = NULL;
  insertAtLast(head2,9);
  insertAtLast(head2,10);
  insertAtLast(head2,3);
  insertAtLast(head2,4);
  insertAtLast(head2,5);
  printList(head2);

  makeIntersection(head1,head2,3);

  cout << intersect(head1,head2) << endl;
  return 0;
}
