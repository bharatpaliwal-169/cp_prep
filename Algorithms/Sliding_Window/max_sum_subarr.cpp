// Max Sum SubArray of size k
#include<bits/stdc++.h>
using namespace std;

// approach : sliding window

int main(){
  int n;cin >> n;
  vector<int> arr;
  for(int i=0; i<n; i++){
    int x;cin >> x;
    arr.push_back(x);
  }
  int k;cin >> k;
  
  int sum =0 ,ans = 0;
  int i=0,j=0;
  while(j < n){ // run loop over array 
    sum += arr[j]; // consider each element in array

    int window = j-i + 1; // window size k
    if(window < k){ // till windoe is equal to k
      j++;
    }
    if(window == k){
      ans = max(ans,sum);
      sum -= arr[i];
      i++; j++; // slide window towards right
    }
  }

  cout << ans << endl;
  return 0;
}