#include<bits/stdc++.h>
using namespace std;

int search(int mat[4][4],int n,int element){
  if(n==0) return -1;

  int i=0 , j = n-1;
  while(i<n && j >= 0){
    if(mat[i][j] == element) return 1;
    else if(mat[i][j] > element) j--;
    else i++;
  }
  return -1;
}

int main(){
  int n = 4;
  int mat[4][4];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cin >> mat[i][j];
    }
  }

  int target = 0;cin >> target;
  cout << search(mat,n,target) << endl;

  return 0;
}
