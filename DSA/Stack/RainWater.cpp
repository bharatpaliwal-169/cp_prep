//rainwater trapping 
#include<bits/stdc++.h>
using namespace std;


int RWT(vector<int>&arr){
  int n = arr.size();
  vector<int> mxL(n);
  vector<int> mxR(n);
  mxL[0] = arr[0];
  mxR[n-1] = arr[n-1];
  for(int i=1;i<n;i++){
    mxL[i] = max(mxL[i-1],arr[i]);
  }
  for(int i=n-2;i>=0;i--){
    mxR[i] = max(mxR[i+1],arr[i]);
  }
  vector<int> water(n);
  for(int i=1;i<n;i++){
    water[i] = min(mxL[i],mxR[i]) - arr[i];
  }
  int ans = 0;
  for(int i=1;i<n;i++){
    ans += water[i];
  }
  return ans;
}


int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }

  cout << RWT(arr) << endl;

  return 0;
}