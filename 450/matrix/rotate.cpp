#include<bits/stdc++.h>
using namespace std;
#define n 3

void print(int arr[n][n]){
  for(int i=0; i<n; i++)
    for(int j=0; j<n; j++)
      cout << arr[i][j] << " ";
    cout << endl;
}

void rotate(int arr[n][n]){
  // for(int j=0;j<n;j++){
  //   for(int i=n-1;i>=0;i--){
  //     cout << arr[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[j][i];
      arr[j][i] = temp;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n/2;j++){
      int temp = arr[i][j];
      arr[i][j] = arr[i][n-j-1];
      arr[i][n-j-1] = temp;
    }
  }
}


int main(){
  int arr[n][n] = {
    {1, 2, 3},
    {4, 5 ,6},
    {7, 8, 9}
  }; 
  rotate(arr);
  print(arr);
  return 0;
}