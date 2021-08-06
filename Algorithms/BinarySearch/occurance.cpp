#include <bits/stdc++.h>
using namespace std;

int Focc(int arr[],int n,int l, int h, int key){
  if(l <= h){
    int mid = l + (h-l)/2;
    if(arr[mid] == key && ( mid == 0 || key != arr[mid -1]) ) return mid;
    if(key > arr[mid]) return Focc(arr,n, (mid+1) ,h,key);
    else return Focc(arr,n,l, (mid-1) ,key);
  }
  return -1;
}

int Locc(int arr[],int n,int l,int h,int key){
  if(l <= h){
    int mid = l + (h-l)/2;
    if(arr[mid] == key && ( mid == n || key != arr[mid + 1]) ) return mid;
    if(key < arr[mid]) return Locc(arr,n,l,(mid-1),key);
    else return Locc(arr,n,(mid+1),h,key);
  }
  return -1;
}



void findFirstAndLast(int arr[], int n, int x)
{
  int first, last;
  // to store first occurrence
  first = lower_bound(arr, arr + n, x) - arr;
  // to store last occurrence
  last = upper_bound(arr, arr + n, x) - arr - 1;

  if (first == n) {
      first = -1;
      last = -1;
  }
  cout << "First Occurrence = " << first
        << "\nLast Occurrence = " << last;
}

int main(){
  int n = 5;
  int arr[] = {0,1,2,2,2,10};
  cout << Focc(arr,n,0,n,2) << endl;
  cout << Locc(arr,n,0,n,2) << endl; 
  // cout << last(arr,n,0,n,2) << endl;
  // findFirstAndLast(arr,n,2);
  return 0;
}
