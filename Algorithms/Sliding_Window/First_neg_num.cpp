// We need to find the first -ve number in each subarr of size k
#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>

vi FNN(vi& arr,int& k){
  int i=0,j=0;
  vi ans;
  queue<int> list;
  while(j<arr.size()){

    if(arr[j] < 0) list.push(arr[j]);
    
    int win = j-i+1;
    if(win < k) j++;
    if(win == k){
      // if we don't have any -ve num
      if(list.size() == 0){
        ans.pb(0);
      }

      else{
        ans.pb(list.front());
        // we will remove the first/old -ve num before entering into new window.
        if(arr[i] == list.front()){
          list.pop();
        }
      }
      i++;j++;
    }
  }
  return ans;
}

int main(){

  int k;cin>>k;
  int n;cin >> n;
  vi input(n,0);
  for(int i=0;i<n;i++){
    int x;cin >> x;
    input[i] = x;
  }
  vi res = FNN(input,k);
  for(int i=0;i<res.size();i++){
    cout << res[i] << " ";
  }
  cout << nl;
  return 0;
}