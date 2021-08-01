#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;

  Node(int value){
    data = value;
    left = NULL;
    left = NULL;right= NULL;
  }
};

void right(Node* root){
  if(!root) return;


  //level order traversal approach
  queue<Node*> q;
  q.push(root);q.push(NULL);

  while(!q.empty()){
    Node* node = q.front();
    q.pop();
    //right most node
    if( !q.front() && !q.empty()){
      cout << node->data << endl;
    }
    if(node){
      if(node->left){
        q.push(node->left);
      }
      if(node->right) {
        q.push(node->right);
      }
    }

    else if(!q.empty()){
      q.push(NULL);
    }

    
  }
}

int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  right(root);
  
  return 0;
}
