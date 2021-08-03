//print all the sub-arrays of given array
#include <bits/stdc++.h>
using namespace std;

void subarray(vector<int>& arr){
  for(int i=0;i<arr.size();i++){
    for(int j=i;j<arr.size();j++){
      cout << "[ " ;
      for(int k=i;k<=j;k++){
        cout << arr[k] << " ";
      }
      cout << "]";
    }
    cout << endl;
  }
}

void printSubArrays(vector<int>& arr,int start,int end ){
  int sum = 0;
  
  if(end == arr.size()) return;
  else if(start > end) printSubArrays(arr,0,end+1);
  
  else{
    cout << "[ " ;
    for(int i=start; i<=end; i++){
      cout << arr[i] << ",";
    }
    cout << "]";
    printSubArrays(arr,start+1,end);
  }


}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  vector<int> arr(n);
  for (int i=0; i<n; i++)
    cin >>arr[i];

  // subarray(arr);
  printSubArrays(arr,0,0);
  return 0;
}
