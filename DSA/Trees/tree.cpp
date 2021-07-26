#include<bits/stdc++.h>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;
  node(int value){
    data = value;
    left = NULL;
    right = NULL;
  }
};

void printTree(node* root){
  if(root == NULL) return;
  printTree(root->left);
  cout << root->data << "->";
  printTree(root->right);
}
int main(){
  node* root = new node(1);
  root->left = new node(2);
  root->right = new node(3);
  root->left->left = new node(4);
  printTree(root);
  return 0;
}
