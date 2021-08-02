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


void flatten(Node* root){
  //base if tree is already flattened
  if( root == NULL || (root->left == NULL && root->right == NULL) ){
    return;
  }

  if(root->left != NULL){
    flatten(root->left);
    //we stroed right subtree in  temp and made left ST as Right ST.
    Node* temp = root->right;
    root->right = root->left;
    root->left = NULL;

    //we traverse the new right ST and get to its end point so that we can append the old R ST.
    Node* tail = root->right;
    while(tail->right != NULL){
      tail = tail->right;
    }

    tail->right = temp;
  }
  flatten(root->right);
}

void print(Node* root){
  if(!root) return ;

  print(root->left);
  cout << root->data << " ";
  print(root->right);
}

int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(5);
  root->right->right = new Node(6);
  root->left->left = new Node(3);
  root->left->right = new Node(4);
  
/*
      1
    2   5
  3  4   6

*/
  print(root);
  cout << "--------------------------------" << endl;
  flatten(root);
  cout << "--------------------------------" << endl;
  print(root);

  return 0;
}
