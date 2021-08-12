#include<bits/stdc++.h>
using namespace std;

vector<int> getUnique(int arr[],int n){
  int XOR = arr[0];
  for(int i = 1; i < n; i++){
    XOR ^= arr[i];
  }

  int set_bit_no = XOR & ~(XOR-1);
  int x=0,y=0;
  vector<int> ans;
  for(int i=0;i<n; i++){
    if(arr[i] & set_bit_no){
      x = x^arr[i];
    }
    else{
      y = y^arr[i];
    }
  }

  ans.push_back(x);
  ans.push_back(y);

  return ans;
}

int main(){

  int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
  int n = sizeof(arr) / sizeof(*arr);

  vector<int> result = getUnique(arr,n);
  for(auto x: result){
    cout << x << endl;
  }
}
