#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int l ,int mid , int r ){
  int n1 = mid-l+1, n2= r - mid;
  
  int a[n1], b[n2];
  //1st half
  for(int i=0; i<n1; i++){
    a[i] = arr[l + i];
  }
  //2nd half
  for(int j=0; j<n2; j++){
    b[j] = arr[mid + j + 1];
  }

  int i=0,j=0,k=l;
  while(i<n1 && j <n2){
    if(a[i] < b[j]){
      arr[k] = a[i];
      k++;i++;
    }
    else{
      arr[k] = b[j];
      k++;j++;
    }
  }
  while(i<n1){
      arr[k] = a[i];
      k++;i++;
  }
  while(j<n2){
      arr[k] = b[j];
      k++;j++;
  }
}

void mergeSort(int arr[],int l,int r){
  if(l<r){
    int mid = (l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);

    merge(arr,l,mid,r);
  }
}

int main(){
  int arr[] = { 2, 11, 121, 9, 6, 7 };
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  mergeSort(arr,0,arr_size-1);
  for(int i=0;i<arr_size;i++){
    cout << arr[i] << " ";
  }
  return 0;
}
