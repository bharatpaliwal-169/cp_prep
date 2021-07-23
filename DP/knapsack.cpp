// 0/1 knapsack DP approach

#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[] , int wt[] , int n , int W){

  //recursive approach

  // if(n==0 || W == 0) return 0;
  // if(wt[n-1] > W) knapsack(value,wt,n-1,W);

  // return max(
  //   knapsack(value,wt,n-1,W-wt[n-1]) + value[n-1],
  //   knapsack(value,wt,n-1,W)
  // );


  //this is the recursive approach

  //now we will see DP approach

  //approach 1 MEMOIZATION
  //RC + table;

  // int dp[n+1][W+1];
  // memset(dp,-1,sizeof(dp));
  // if(n==0||W==0) return 0;

  // if(dp[n][W] != -1){
  //   return dp[n][W];
  // }
  // if(wt[n] > W){
  //   return dp[n][W] = knapsack(value,wt,n-1,W);
  // }
  // return dp[n][W] = max(
  //   knapsack(value,wt,n-1,W-wt[n-1]) + value[n-1],
  //   knapsack(value,wt,n-1,W)
  // );

  //approach 2 : TOP_DOWN 
  //only table approach
  int dp[n+1][W+1];
  
  for(int i=0;i<n+1;i++){
    for(int j=0;j<W+1;j++){
      if(i==0||j==0) dp[i][j] = 0; //initialize
    }
  }

  for(int i=1;i<n+1;i++){
    for(int j=1;j<W+1;j++){
      if(wt[i-1] <= j){
        dp[i][j] = max(value[i-1] + dp[i-1][j - wt[i-1] ] , dp[i-1][j]);
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  return dp[n][W];

}

int main()
{
  int n = 3;
  int W = 50;
  int wt[] = {10,20,30};
  int value[] = {10,50,250};
  cout << knapsack(value,wt,n,W) << endl;
  return 0;
}
