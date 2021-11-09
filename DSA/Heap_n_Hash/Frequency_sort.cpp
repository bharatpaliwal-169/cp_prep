// Frequency Sort
#include<bits/stdc++.h>
using namespace std;

// approach : use frq as key and max_heap

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  // int k;cin >> k;
  
  unordered_map<int,int> m;
  for(auto i : arr){
    m[i]++;
  }
  
  // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_heap;
  priority_queue<pair<int,int>> max_heap;
  for(auto i :m){
    max_heap.push({i.second,i.first});
  }
  while(!max_heap.empty()){
    cout << max_heap.top().second << endl;
    max_heap.pop();
  }

  return 0;
}