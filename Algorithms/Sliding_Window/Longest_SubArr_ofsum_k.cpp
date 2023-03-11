#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>

int LongSubArr(vi& arr,int k){
  int ans = 0;
  int i=0,j=0,sum = 0;
  while(j<arr.size()){
    sum += arr[j];
    if(sum < k)j++;
    if(sum == k){
      ans = max(ans,j-i+1);
      j++;
    }
    if(sum > k){
      while(sum > k){
        sum -= arr[i];
        i++;
      }
      j++;
    }
  }
  return ans;
}

int main(){
  int n;cin >> n;
  vi in;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    in.pb(x);
  }
  int K; cin >> K;
  int res = LongSubArr(in,K);
  cout << res << nl;
  return 0;
}