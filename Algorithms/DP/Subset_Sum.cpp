//Subset sum problem
// check if a susbset is present that sums up to given number.
#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[],int sum,int n){
  bool dp[n+1][sum+1]; 
  // initialize
  for(int i=0;i<=n;i++){
    dp[i][0] = true;
  }
  for(int j=1;j<=sum;j++){
    dp[0][j] = false;
  }

  //main logic
  for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
      if(arr[i-1] <= j){
        dp[i][j] = dp[i-1][j - arr[i-1]] || dp[i-1][j];
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

int main() {
  int arr[5] = {2,3,7,8,10};
  int sum = 11;
  (isPresent(arr,sum,5)) ? cout << "yes" << endl : cout << "no" << endl;
	return 0;
}