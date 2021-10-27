// count the subset with given sum
#include<bits/stdc++.h>
using namespace std;

int countSubset(int arr[],int n,int sum){
  int dp[n+1][sum+1];
  memset(dp,0,sizeof(dp));
  for(int i=0;i<=n;i++){
    dp[i][0] = 1;
  }
  for(int j=1;j<=sum;j++){
    dp[0][j] = 0;
  }

  for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
      if(arr[i-1] <= j){
        dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
      cout << dp[i][j] << " ";
    }
    cout << "\n";
  }
  return dp[n][sum];
}

int main(){
  int arr[6] = {2,3,5,6,8,10};
  int sum = 10;

  cout << countSubset(arr,6,sum) << endl;
}