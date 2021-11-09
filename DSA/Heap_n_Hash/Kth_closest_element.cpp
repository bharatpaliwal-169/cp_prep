// Kth closest element
#include<bits/stdc++.h>
using namespace std;

// approach 1 : subract X from each element and find
// approach 2 : use arr[i]-X as key to sort and use max_heap
// k is given
int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;
  int x; cin >> x;
  // priority_queue<int,vector<int>,greater<int>> min_heap;
  priority_queue<pair<int,int>> max_heap;
  for(int i=0; i<n; i++){
    max_heap.push({abs(x-arr[i]),arr[i]});
    if(max_heap.size()>k){
      max_heap.pop();
    }
  }
  while(!max_heap.empty()){
    cout << max_heap.top().second << " ";
    max_heap.pop();
  }
  
  return 0;
}