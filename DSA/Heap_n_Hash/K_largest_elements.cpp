// return all k largest elements
#include<bits/stdc++.h>
using namespace std;

// approach 1 : sort entire array o(nlogn)
// approach 2 : min_heap of size k

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;

  priority_queue<int,vector<int>,greater<int>> min_heap;

  for(int i=0; i<n; i++){
    min_heap.push(arr[i]);
    if(min_heap.size()>k){
      min_heap.pop();
    }
  }

  while(!min_heap.empty()){
    cout << min_heap.top() << endl;
    min_heap.pop();
  }
  
  return 0;
}