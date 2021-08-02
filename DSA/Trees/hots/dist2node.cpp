// very imp and bit difficult
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  struct Node* left;
  struct Node* right;

  Node(int value){
    data = value;
    left = NULL;
    right = NULL;
  }
};

// Code giving wrong output  VD : 103 AC

Node* LCA(Node* root , int src,int dest){
  //base
  if(!root) return NULL;
  if(root->data == src || root->data == dest){
    return root;
  }

  // find left lca and right lca
  Node* left = LCA(root->left,src,dest);
  Node* right = LCA(root->right,src,dest);

  if(left !=  NULL && right != NULL){
    return root;
  }

  if(left == NULL && right == NULL){
    return NULL;
  }

  if(left) return left;
  return right;
}

int findDist(Node* root, int k ,int dist){
  if(!root) return -1;

  if(root->data == dist) return dist;

  int left = findDist(root->left,k,dist+1);

  if(left != -1) return left;
  return findDist(root->right,k,dist+1);

}

int distanceBWNode(Node* root , int src,int dest){
  Node* lca = LCA(root,src,dest);

  int d1 = findDist(lca,src,0);
  int d2 = findDist(lca,dest,0);

  return d1+d2;
}

int main(){
  struct Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->right->right = new Node(5);

  cout << distanceBWNode(root,4,5) << endl;

  return 0;
}
