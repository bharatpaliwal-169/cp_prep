// Top k frequent elements
#include<bits/stdc++.h>
using namespace std;

// approach : use frq as key and min_heap
// k is given
int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;
  
  unordered_map<int,int> m;
  for(auto i : arr){
    m[i]++;
  }
  
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_heap;
  // priority_queue<pair<int,int>> max_heap;
  
  for(auto i : m){
    min_heap.push({i.second,i.first});
    if(min_heap.size() > k){
      min_heap.pop();
    }
  }
  while(!min_heap.empty()){
    cout << min_heap.top().second << " ";
    min_heap.pop();
  }
  
  return 0;
}