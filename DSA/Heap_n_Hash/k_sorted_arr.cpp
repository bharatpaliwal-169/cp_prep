// Sort a k sorted array
#include<bits/stdc++.h>
using namespace std;

// approach 1 : sort entire array o(nlogn)
// approach 2 : min_heap of size k and return top

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;

  priority_queue<int,vector<int>,greater<int>> min_heap;
  vector<int> sortedk;
  for(int i=0; i<n; i++){
    min_heap.push(arr[i]);
    if(min_heap.size()>k){
      sortedk.push_back(min_heap.top());
      min_heap.pop();
    }
  }
  while(!min_heap.empty()){
    sortedk.push_back(min_heap.top());
    min_heap.pop();
  }
  for(auto i:sortedk){
    cout << i << " ";
  }
  return 0;
}