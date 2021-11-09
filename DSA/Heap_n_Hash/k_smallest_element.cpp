// Kth smallest element
#include<bits/stdc++.h>
using namespace std;

// approach 1 : sort entire array o(nlogn)
// approach 2 : max_heap of size k

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;

  priority_queue<int> max_heap;

  for(int i=0; i<n; i++){
    max_heap.push(arr[i]);
    if(max_heap.size() > k){
      max_heap.pop();
    }
  }
  cout << max_heap.top() << endl;
  return 0;
}