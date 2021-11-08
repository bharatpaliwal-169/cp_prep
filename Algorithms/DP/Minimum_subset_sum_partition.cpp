// find the min possible difference between two subset-partition of the given array.
// given array A -> p1 , p2 mein partition karo then s1 = sum(p1) s2 = sum(p2) 
// find best partition such that abs(s2-s1) is minimum.
#include<bits/stdc++.h>
using namespace std;

int subset_range_diff(int arr[],int n,int range){
  int dp[n+1][range+1];
  memset(dp,0,sizeof(dp));
  for(int i=0;i<=n;i++){
    dp[i][0] = 1;
  }
  for(int j=1;j<=range;j++){
    dp[0][j] = 0;
  }

  vector<int> v;
  for(int i=1;i<n+1;i++){
    for(int j=1;j<range+1;j++){
      if(arr[i-1] <= j){
        dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
      }
      else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=range;j++){
      cout << dp[i][j] << " ";
      if(i==n-1){
        v.push_back(j);
      }
    }
    cout << "\n";
  }
  int ans = INT_MAX;
  int till = (n%2==0) ? v.size()/2 : v.size()/2 - 1;
  for(int i=1;i<till;i++){
    cout << v[i] << " ";
    ans = min(ans,range - (2*v[i]) );
  }
  cout << "\n";
  return ans;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int range = 0;
  for(int i=0;i<n;i++){
    range+= arr[i];
  }
  cout << subset_range_diff(arr,n,range) << endl;
}