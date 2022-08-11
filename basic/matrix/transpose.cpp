#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
  int row = matrix.size();
  int col = matrix[0].size();
  vector<vector<int>> res(col,vector<int>(row,0));
  for(int j=0;j<col;j++){
    for(int i=0;i<row;i++){
      res[j][i] = matrix[i][j];
    }
  }
  return res;
}

int main()
{

  ios_base::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  

  return 0;
}
