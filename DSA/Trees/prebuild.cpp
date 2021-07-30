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
  // if(start<=end){
  //   int mid = start+ (end-start)/2;
  //   if(arr[mid]==target){
  //     return mid;
  //   }
  //   else if(arr[mid]>target) search(arr,start,mid-1,target);
  //   else search(arr,mid+1,end,target);
  // }
  // return -1;

  for(int i=start; i<=end; i++){
    if(arr[i]==target){
      return i;
    }
  }
  return -1;
}

Node* buildTree(int pre[] , int in[] , int start, int end){
  if(start > end) return NULL;
  
  static int id = 0;
  int current = pre[id]; id++;
  Node* newNode = new Node(current);
  int pos = search(in,start,end,current);

  // if(start == end) return newNode;

  newNode->left = buildTree(pre,in,start,pos-1);
  newNode->right = buildTree(pre,in,pos+1,end);

  return newNode;
}

void printTree(struct Node* root){
  if(root == NULL) return;
  printTree(root->left);
  cout << root->data << " ";
  printTree(root->right);
}

int main(){
  int preOrder[] = {1,2,4,3,5};
  int inOrder[] = {4,2,1,5,3};


  struct Node* root = buildTree(preOrder, inOrder , 0, 4);
  printTree(root);
  return 0;
}
