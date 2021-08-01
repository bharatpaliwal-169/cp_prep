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

void replaceSum(Node* root){
  if(!root) return;

  replaceSum(root->left);
  replaceSum(root->right);

  if(root->left) root->data += root->left->data;
  if(root->right) root->data += root->right->data;

}

void print(Node* root){
  if(!root) return;
  print(root->left);
  cout << root->data << " ";
  print(root->right);
}

int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  
  print(root);
  cout << endl;
  replaceSum(root);
  print(root);

  return 0;
}
