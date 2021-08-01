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

int height(Node* root) {
  if(!root) return 0;

  int lh = height(root->left);
  int rh = height(root->right);

  return max(lh, rh)+1;
}


bool isbalance(Node* root) {
  if(!root) return true;

  if(!isbalance(root->left) || !isbalance(root->right)) return false;

  int lh = height(root->left);
  int rh = height(root->right);

  return (abs(lh - rh) <= 1);
}


bool isbalanceop(Node* root , int* h){
  if(!root){
    *h = 0;
    return true;
  }
  int lh = 0; 
  int rh = 0;
  if(!isbalanceop(root->left,&lh) || !isbalanceop(root->right,&rh)) return false;
  *h = max(lh,rh) + 1;
  return (abs(lh - rh) <= 1);
}


int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  
  // root->right = new Node(3);
  root->left->left = new Node(4);
  // root->left->right = new Node(5);
  // root->right->left = new Node(6);
  // root->right->right = new Node(7);
  
  
  cout << isbalance(root) << endl;  
  int h = 0;
  cout << isbalanceop(root,&h) << endl;  
  return 0;
}
