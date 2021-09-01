//next larget element 
#include <bits/stdc++.h>
using namespace std;
//ignore the duplicates in the input array.
vector<int> nle(vector<int>& nums){
  vector<int> ans;
  stack<int> s;
  for(int i = nums.size()-1; i >= 0;i--){
    if(s.size() == 0){
      ans.push_back(-1);
    }
    else if( (s.size() != 0||!s.empty()) && s.top() > nums[i]){
      ans.push_back(s.top());
    }
    else if((s.size() != 0||!s.empty()) && s.top() < nums[i]){
      while((s.size() != 0||!s.empty()) && s.top() < nums[i]){
        s.pop();
      }
      if(s.empty()){
        ans.push_back(-1);
      }
      else{
        ans.push_back(s.top());
      }
    }
    s.push(nums[i]);
  }
  reverse(ans.begin(), ans.end());
  return ans;
}



vector<int> NLL(vector<int> nums){
  vector<int> ans;
  stack<int>s;
    for(int i = 0;i<nums.size();i++){
    if(s.size() == 0){
      ans.push_back(-1);
    }
    else if( (s.size() != 0||!s.empty()) && s.top() > nums[i]){
      ans.push_back(s.top());
    }
    else if((s.size() != 0||!s.empty()) && s.top() < nums[i]){
      while((s.size() != 0||!s.empty()) && s.top() < nums[i]){
        s.pop();
      }
      if(s.empty()){
        ans.push_back(-1);
      }
      else{
        ans.push_back(s.top());
      }
    }
    s.push(nums[i]);
  }
  // reverse(ans.begin(), ans.end());
  return ans;

}


int main(){
  int n;cin >> n;
  vector<int> a;
  vector<int> res;
  vector<int> res1;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    a.push_back(x);
  }
  res = nle(a);
  for(auto &i: res){
    cout << i << " ";
  }
  res1 = NLL(a);
  for(auto &i: res1){
    cout << i << " ";
  }
  return 0;
}
