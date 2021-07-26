#include<bits/stdc++.h>
using namespace std;
// #define size 10
class node{
  public:
  int data;
  node* next;
  node(int value){
    data = value;
    next = NULL;
  }
};


class Queue{
  // int *arr; int front; int back;
  // public:
  // Queue(){
  //   arr = new int[size];
  //   front = -1; back = -1;
  // }

  // void enqueue(int value){
  //   if(back == size-1){
  //     cout << "Queue is full!" << endl;
  //     return ;
  //   }
  //   back++;
  //   arr[back] = value;
  //   if(front == -1){
  //     front++;
  //   }
  // }

  // void dequeue() {
  //   if(back == size-1 || front > back){
  //     cout << "Queue is empty!" << endl;
  //   }
  //   front++;
  // }

  // int peek() {
  //   if(back == size-1 || front > back){
  //     return -1;
  //   }
  //   return arr[front];
  // }

  // bool isEmpty(){
  //   if(back == size-1 || front > back) return true;
  //   return false;
  // }


  //Linked List implementation
  public:
  node* front;
  node* back;
  Queue(){
    front = NULL; back = NULL;
  }

  void enqueue(int value){
    node* x = new node(value);
    if(front == NULL){
      front = x;back = x;
      return;
    }
    back->next = x;
    back = x;
  }
  
  void dequeue(){
    if(front == NULL) 
    {
      cout << "Empty queue" << endl;
      return;
    }
    node* todel = front;
    front = front->next;
    delete todel;
  }
  int peek(){
    if(front == NULL){
      cout << "Empty queue" << endl;
      return -1;
    }
    return front->data;
  }
  bool isEmpty(){
    if(front) return false;
    return true;
  }
};

int main(){
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  cout << q.peek() << endl;
  q.dequeue();
  cout << q.peek() << endl;
  cout << q.isEmpty() << endl;
  return 0;
}
