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

void levelorder(Node* root){
  if(root == NULL) return;
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while(!q.empty()){
    Node* temp = q.front();
    q.pop();
    if(temp){
      cout << temp->data << " ";
      if(temp->left){
        q.push(temp->left);
      }
      if(temp->right){
        q.push(temp->right);
      }
    }
    else if(!q.empty()){ // at a level end we add a null
      q.push(NULL);
    }
  }
}

int sumatk(Node* root , int k){
  if(!root) return -1;
  queue<Node*>q;
  q.push(root);
  q.push(NULL);
  int level = 0,sum = 0;
  while(!q.empty()){
    Node* node = q.front();
    q.pop();
    if(node){
      if(level == k){
        sum += node->data;
      }
      if(node->left) q.push(node->left);
      if(node->right) q.push(node->right);
    }
    else if(!q.empty()){
      level++;
      q.push(NULL);
    }
  }

  return sum ;
}

int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  levelorder(root);
  cout << sumatk(root,2) << endl;
  return 0;
}
