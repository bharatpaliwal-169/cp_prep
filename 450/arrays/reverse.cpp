#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

void reverse(int arr[],int size){
  int start = 0,end = size-1;
  while(start < end){
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;end--;
  }
}

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[] = {0,1,2,3,4,5,6,7};
  reverse(arr,8);
  for(int i = 0; i < 8; i++)
    cout << arr[i] << " ";
  return 0;
}
