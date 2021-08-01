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

void left(Node* root){
  if(!root) return;


  //level order traversal approach
  queue<Node*> q;
  q.push(root);
  while(!q.empty()) {
    int n = q.size();
    for(int i = 0; i < n; i++){
      Node* node = q.front();
      q.pop();

      if(i==0) cout << node->data << endl;

      if(node->left)  q.push(node->left);
      if(node->right) q.push(node->right);
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

  left(root);
  
  return 0;
}
