#include<bits/stdc++.h>
using namespace std;


void solve(stack<int>&s,int k){
  if(k==1){
    s.pop();return;
  }
  int temp = s.top();
  s.pop();
  solve(s,k-1);
  s.push(temp);
  return;
}

stack<int> delmid(stack<int>&s,int size){
  if(s.empty()) return;
  int k = (size/2) +1;
  solve(s,k);
  return s;
}

int main(){
  int arr[] = {2,0,1,5};
  stack<int> s;
  for(int i=0;i<4;i++){
    s.push(arr[i]);
  }
  stack<int>res = delmid(s,4);
  while(res.size()!=0) {
    cout << res.top() << endl;
    res.pop();
  }
  return 0;
}
