// /max area histogram
#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(vector<int> &arr){
  vector<int> v;
  stack<pair<int, int>>s;
  for(int i=0;i<arr.size();++i){
    if(s.empty()) v.push_back(-1);
    else if(!s.empty() and s.top().first < arr[i]){
      v.push_back(s.top().second);
    }
    else if(!s.empty() and s.top().first > arr[i]){
      while(!s.empty() and s.top().first > arr[i]){
        s.pop();
      }
      if(s.empty()) v.push_back(0);
      else v.push_back(s.top().second);
    }
    s.push({arr[i],i});
  }
  return v;
}

vector<int> NSR(vector<int> &arr){
  vector<int> v;
  stack<pair<int, int>>s;
  for(int i=arr.size()-1; i>=0; i--){
    if(s.empty()) v.push_back(-1);
    else if(!s.empty() and s.top().first < arr[i]){
      v.push_back(s.top().second);
    }
    else if(!s.empty() and s.top().first > arr[i]){
      while(!s.empty() and s.top().first > arr[i]){
        s.pop();
      }
      if(s.empty()) v.push_back(0);
      else v.push_back(s.top().second);
    }
    s.push({arr[i],i});
  }
  reverse(v.begin(), v.end());
  return v;
}


int MAH(vector<int>&arr){
  int maxarea = 0;
  int n = arr.size();
  vector<int> left = NSL(arr);
  vector<int> right = NSR(arr);
  vector<int> width(n);
  for(int i = 0; i < n; i++){
    width[i] = abs(right[i] - left[i]) - 1;
  }
  vector<int> area(n);
  for(int i = 0; i <n; i++){
    area[i] = width[i] * arr[i];
  }

  maxarea = *max_element(area.begin(), area.end());
  return maxarea;
}


int main(){
  int a[] = {6,2,5,4,5,1,6};
  vector<int> arr;
  for(int i=0;i<7;i++){
    arr.push_back(a[i]);
  }
  //pseudo buildings
  arr.insert(arr.begin(),-1);
  arr.push_back(-1);
  
  for(auto &i:arr) cout << i << " ";

  cout << MAH(arr) << endl;

  return 0;
}
