#include<bits/stdc++.h>
using namespace std;


void printpascal(int n){
  
  int arr[n][n];
  for(int i=0; i<=n; i++){
    for(int j=0;j<=i;j++){
      if(i==j or j==0){
        arr[i][j] = 1;
      }
      else{
        arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
      }

      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}
int dp[34][34];
vector<int>result (int n){
  vector<vector<int>>res;
  
  for(int i = 0; i<n+1; i++){
      vector<int>v;
      for(int j = 0; j<=i;j++){
          if(i == 0 || j ==0){
              dp[i][j] = 1;
          }
          else{
              dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
          }
          v.push_back(dp[i][j]);
      }
      res.push_back(v);
  }
  return res[n];
}

vector<int> getRow(int n) {
    memset(dp, 0, sizeof(dp));
    return result(n);
}

int main(){
  int n;cin >> n;
  printpascal(n);
  return 0;
}