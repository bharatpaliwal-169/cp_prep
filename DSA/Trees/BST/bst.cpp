#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left,*right;

  Node(int value){
    data = value;
    left = NULL;
    right = NULL;
  }
};

Node* insert(Node* root , int value){
  if(root == NULL){
    return new Node(value);
  }
  if(value < root->data){
    root->left = insert(root->left, value);
  }
  else{
    root->right = insert(root->right, value);
  }

  return root;
}

void print(Node *root){
  if(!root) return;
  print(root->left);
  cout << root->data << " ";
  print(root->right);
}

int main(){
  int arr[] = {5,1,3,4,2,7};
  Node* root = NULL;
  root = insert(root, arr[0]);
  for(int i=1; i<5;i++){
    insert(root, arr[i]);
  }

  print(root);
  return 0;
}
