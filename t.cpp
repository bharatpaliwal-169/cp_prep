
#include<bits/stdc++.h>
using namespace std;


int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int x;cin >> x;

  vector<pair<int,int>> num;
  for(int i=0; i<n; i++){
    num.push_back({arr[i],i});
  }

  sort(num.begin(), num.end());
  int l=0,r=num.size()-1;
  while(l<r){
    int sum = num[l].first + num[r].first;

    if(sum == x){
      cout << num[l].second << " " << num[r].second << endl;
      return 0;
    } 
    if(sum > x) r--;
    else l++;
  }

  cout << "false" << endl;
  return 0;
}