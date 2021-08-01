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

//o n2
int diameter(Node* root) {

  if(!root) return 0;

  int lh = height(root->left);
  int rh = height(root->right);

  int current_diameter = lh+rh+1;

  int ld = diameter(root->left);
  int rd = diameter(root->right);

  return max(current_diameter, max(ld,rd));

}

//o n
int opDiameter(Node* root , int* height){
  if(!root){
    *height = 0;
    return 0;
  }
  int lh = 0,rh = 0;
  int ld = opDiameter(root->left,&lh);
  int rd = opDiameter(root->right,&rh);

  int current_diameter = lh + rh + 1;

  *height = max(lh,rh) + 1;

  return max(current_diameter , max(rd,ld)); 
}


int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);
  root->right->left = new Node(6);
  root->right->right = new Node(7);

  
  cout << diameter(root) << endl;
  int h = 0;
  cout << opDiameter(root,&h) << endl;

  return 0;
}
