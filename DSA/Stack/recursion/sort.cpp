#include<bits/stdc++.h>
using namespace std;


void insert(stack<int>&s,int temp){
  if(s.empty()) return;
  if(s.top() <= temp) s.push(temp);
  int val = s.top();
  insert(s,val);
  s.push(temp);
}
void sort(stack<int>&s){
  if(s.empty()) return;
  int temp = s.top();
  s.pop();
  sort(s);
  insert(s,temp);
}

int main(){
  int arr[] = {2,0,1,5};
  stack<int> s;
  for(int i=0;i<4;i++){
    s.push(arr[i]);
  }
  sort(s);
  while(s.size()!=0) {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}
