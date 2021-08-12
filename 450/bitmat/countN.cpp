#include<bits/stdc++.h>
using namespace std;

int findLargestPower(int n){
  int x=0;
  while( (1<<x) <= n ){
    x++;
  }

  return x-1;
}

int countBitsToN(int n){
  if(n<=1) return n;
  int x = findLargestPower(n);
  int p1 = pow(2,x-1);
  int p2 = pow(2,x);

  return (x*p1) + (n - p2 +1) + countBitsToN(n - p2);
}

int main(){
  int n;cin >> n;
  cout << countBitsToN(n) << endl;
  return 0;
}
