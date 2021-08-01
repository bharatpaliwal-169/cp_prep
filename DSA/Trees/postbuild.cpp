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

int search(int arr[],int start,int end, int target){
  for(int i=start; i<=end; i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}

Node* buildTree(int post[] , int in[] , int start, int end){
  if(start > end) return NULL;
  
  static int id = 4;
  int current = post[id]; id--;
  Node* newNode = new Node(current);
  int pos = search(in,start,end,current);

  // if(start == end) return newNode;

  newNode->right = buildTree(post,in,pos+1,end);
  newNode->left = buildTree(post,in,start,pos-1);

  return newNode;
}

void printTree(struct Node* root){
  if(root == NULL) return;
  printTree(root->left);
  cout << root->data << " ";
  printTree(root->right);
}

int main(){
  int postOrder[] = {4,2,5,3,1}; // L R N
  int inOrder[] = {4,2,1,5,3};  // L N R


  struct Node* root = buildTree(postOrder, inOrder , 0, 4);
  printTree(root);
  return 0;
}
