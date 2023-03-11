#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>

// *** V.IMP HARD QS ***

// we need to find the max element of each subarray of size k.
// question looks simple but is tricky

vi MaxSubArr( vi& arr, int k){
  vi ans;
  int i=0,j=0;
  deque<int> dq;
  while(j<arr.size()){
    while(!dq.empty() && dq.back() < arr[j]){
      dq.pop_back();
    }

    dq.push_back(arr[j]);
    int window = j-i+1;
    if(window < k)j++;
    if(window == k){
      ans.push_back(dq.front());
      if(dq.front() == arr[i] ) dq.pop_front();
      i++;j++;
    }
  }
  return ans;
}

int main(){
  int k;cin >> k;
  int n;cin >> n;
  vi arr(n,0);
  for(int i=0;i<n;i++){
    int x;cin >> x;
    arr[i] = x;
  }

  vi res = MaxSubArr(arr,k);
  
  for(int i=0;i<res.size();i++){
    cout << res[i] << " ";
  }
  cout << nl;
  return 0;
}