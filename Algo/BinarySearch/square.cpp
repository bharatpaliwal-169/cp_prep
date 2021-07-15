#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int num) {
  long long int start = 1,end = num;
  while(start <= end){
      long long int mid = (start+end)/2;
      if(mid*mid == num)
          return true;
      else if (mid*mid < num)
          start = mid + 1;
      else
          end = mid-1;
  }
  return false;
}

int mySqrt(int n){
  if(n==0||n==1) return n;
  int i =1,ans=1;
  while(ans<= n){
    i++; ans = i*i;
  }
  return i-1;
}

int main(){
  isPerfectSquare(16);
  return 0;
}
