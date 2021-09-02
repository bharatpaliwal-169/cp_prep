//next larget element 
#include <bits/stdc++.h>
using namespace std;
//ignore the duplicates in the input array.

//small in right
vector<int> nse(vector<int>& nums){
  vector<int> ans;
  stack<int> s;
  for(int i = nums.size()-1; i >= 0;i--){
    if(s.size() == 0){
      ans.push_back(-1);
    }
    else if( (s.size() != 0||!s.empty()) && s.top() <= nums[i]){
      ans.push_back(s.top());
    }
    else if((s.size() != 0||!s.empty()) && s.top() > nums[i]){
      while((s.size() != 0||!s.empty()) && s.top() > nums[i]){
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


//left
vector<int> NSS(vector<int> nums){
  vector<int> ans;
  stack<int>s;
    for(int i = 0;i<nums.size();i++){
    if(s.size() == 0){
      ans.push_back(-1);
    }
    else if( (s.size() != 0||!s.empty()) && s.top() <= nums[i]){
      ans.push_back(s.top());
    }
    else if((s.size() != 0||!s.empty()) && s.top() > nums[i]){
      while((s.size() != 0||!s.empty()) && s.top() > nums[i]){
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
  res = nse(a);
  for(auto &i: res){
    cout << i << " ";
  }
  res1 = NSS(a);
  for(auto &i: res1){
    cout << i << " ";
  }
  return 0;
}
