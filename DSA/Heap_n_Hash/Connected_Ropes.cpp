// Connected Rope
#include<bits/stdc++.h>
using namespace std;

// approach : use min_heap to find min cost

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  // int k;cin >> k;
  
  priority_queue<int,vector<int>,greater<int> > min_heap;
  // priority_queue<pair<int,int>> max_heap;
  int cost = 0;
  for(auto i : arr){
    min_heap.push(i);
  }
  while(min_heap.size() >= 2){
    int first = min_heap.top();
    min_heap.pop();
    int second = min_heap.top();
    min_heap.pop();

    cost += first+second;
    min_heap.push(first+second);
  }
  cout << cost << endl;
  return 0;
}