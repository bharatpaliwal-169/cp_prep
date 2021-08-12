#include<bits/stdc++.h>
using namespace std;

int main(){
  int n = 4,m = 4;
  int mat[n][m];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> mat[i][j];
    }
  }


  //4 pointer at 4 corners
  int row_start = 0,col_start = 0,col_end = m-1,row_end = n-1;

  while(row_start <=  row_end && col_start <= col_end){
    //for row 1
    for(int j=col_start;j<= col_end;j++)
      cout << mat[row_start][j] << " ";
    cout << endl;
    row_start++;

    // last col
    for(int i = row_start;i<=row_end;i++){
      cout << mat[i][col_end] << " ";
    }
    cout << endl;
    col_end--;

    for(int j=col_end; j>= col_start;j--){
      cout << mat[row_end][j] << " ";
    }
    cout << endl;
    row_end--;

    for(int i = row_end; i>= row_start; i--){
      cout << mat[i][col_start] << " ";
    }
    cout << endl;
    col_start++;
  }
  return 0;
}
