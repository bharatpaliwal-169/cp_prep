//oyo test question
//max consecutive ones
// given a boolean array and we can modify atmost k times from 0 to 1 in the array
//find the length of max contiguous subarray of ones
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int k;cin>>k;
  vector<int> a(n);
  for(auto &i:a){
    cin >> i;
  }
  //we will find subarr of k zeros.

  int count = 0,ans = 0,i=0;
  for(int j=0;j<n;j++){
    if(a[j] == 0 ){
      count++;
    }
    while(count > k){
      if(a[i] == 0) count--;
      i++;
    }
    ans = max(ans,j-i+1);
  }

  cout << ans << endl;
}
