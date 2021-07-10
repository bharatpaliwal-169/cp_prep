#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int target,int start ,int end)
{
  if(start <= end){
    int mid = start + (end - start)/2;

    if(arr[mid] == target){
      return mid;
    }
    if(arr[mid] > target){ //means element is present in left subarray
      return binarySearch(arr , n ,target ,start  , mid-1);
    }
    return binarySearch(arr,n,target,mid+1,end); //otherwise element is present in right subarray
  }
  return -1; //if not found
}

int iterativeBinarySearch(int arr[],int n,int target){
  int l = 0,r = n-1;
  while(l<=r){
    int m = l + (r-l)/2;
    if(arr[m]== target)
      return m;
    
    if(arr[m] < target)
      l = m+1;
    else
      r = m-1;
  }
  return -1;
}

//example
int mySqrt(int n){
  if(n==0||n==1) return n;
  int i =1,ans=1;
  while(ans<= n){
    i++; ans = i*i;
  }
  return i-1;
}

int main(){
  int arr[] = {3,6,7,8,9,10,11,12,13,14,15,16};
  int target = 11;
  int n = sizeof(arr)/sizeof(arr[0]);
  cout << "Position of Found element is : " << binarySearch( arr,n,target,0,n) << endl;
  return 0;
}
