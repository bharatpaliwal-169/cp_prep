//find the pos of given element ; first and its last occ in arr.
#include <bits/stdc++.h>
using namespace std;

int Focc(int arr[],int n,int i,int key){
  if(i==n) return -1; // not fount
  if(arr[i]==key) return i; //key found
  return Focc(arr,n,i+1,key);
}

int Locc(int arr[],int n,int i,int key){
  if(i==n) return -1; // not fount
  int restArr = Locc(arr,n,i+1,key);
  if(restArr != -1) return restArr;
  if(arr[i]==key) return i; //key found
  return -1; //not found
}

int main(){
  int n = 5;
  int arr[n] = {4,2,3,2,5};
  cout << Focc(arr,n,0,2) << endl;
  cout << Locc(arr,n,0,2) << endl;
  return 0;

}
