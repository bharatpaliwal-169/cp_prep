//max area in this given binary matrix;
#include<bits/stdc++.h>
using namespace std;

vector<int> NSR(vector<int>&v){
  vector<int> id;
  stack<pair<int,int>> s;
  int n = v.size();
  for(int i=n-1;i>=0;i--){
    if(s.empty()) id.push_back(-1);
    else if(!s.empty() and s.top().first < v[i]){
      id.push_back(s.top().second);
    }
    else if(!s.empty() and s.top().first > v[i]){
      while(!s.empty() and s.top().first > v[i]){
        s.pop();
      }
      if(s.empty()) id.push_back(-1);
      else id.push_back(s.top().second);
    }
    s.push({v[i],i});
  }
  return id;
}

vector<int> NSL(vector<int>&v){
  vector<int> id;
  stack<pair<int,int>> s;
  int n = v.size();
  for(int i=0;i<n;i++){
    if(s.empty()) id.push_back(-1);
    else if(!s.empty() and s.top().first < v[i]){
      id.push_back(s.top().second);
    }
    else if(!s.empty() and s.top().first > v[i]){
      while(!s.empty() and s.top().first > v[i]){
        s.pop();
      }
      if(s.empty()) id.push_back(-1);
      else id.push_back(s.top().second);
    }
    s.push({v[i],i});
  }
  return id;
}

int MAH(vector<int>&v){
  vector<int> left, right;
  
  
  left = NSL(v);
  right = NSR(v);
  int n = v.size();
  vector<int>width(n);
  for(int i = 0; i < n; i++){
    width[i] = abs(right[i] - left[i]) - 1;
  }
  vector<int>area(n);
  for(int i = 0; i < n; i++){
    area[i] = width[i] * v[i];
  }
  int maxx = *max_element(area.begin(), area.end());
  return maxx;
}

int binaryMaxArea(vector<vector<int>> &arr,int n){
  vector<int> v;
  int maxarea = 0;
  for(int j=0;j<arr[0].size();j++){
    v.push_back(arr[0][j]);
  }
  //pseudo
  v.insert(v.begin(),0);
  v.push_back(0);

  maxarea = MAH(v);
  // cout << maxarea << endl;
  for(int i = 1; i < n; i++){
    for(int j=0;j<arr[i].size(); j++){
        if(arr[i][j] == 0){
          v[j+1] = 0;
        }
        else{
          v[j+1] += arr[i][j];
        }
      // cout << arr[i][j] << " ";
    }
    // for(auto &x: v){
    //     cout << x << " ";
    // }
    // cout << endl;
    maxarea = max(maxarea,MAH(v));
    // cout << endl;
    // cout << maxarea << endl;
  }
  // return 0;
  return maxarea;
}

int main(){
  int n = 4;
  vector<vector<int>> arr = {
    {0,1,1,0},
    {1,1,1,1},
    {1,1,1,1},
    {1,1,0,0}
  };

  int area = binaryMaxArea(arr,n);
  cout << area << endl;

  return 0;
}
