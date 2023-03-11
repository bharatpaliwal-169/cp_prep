#include <bits/stdc++.h>
using namespace std;

int recMx(vector<int>& arr,int& s,int& res){
  if(s == arr.size()) return res;
  if(s<arr.size()){
    res = max(res,arr[s]);
    s++;
  } 
  return recMx(arr,s,res);
}

int findMx(vector<int>& arr){
  int s=0,res=0;
  return recMx(arr,s,res);
}

int main(){
  int n;cin>>n;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int ans = findMx(arr);
  cout << ans << endl;
  return 0;
}