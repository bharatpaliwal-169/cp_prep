#include <bits/stdc++.h>
using namespace std;
int sumofdigit (int n){
  int sum = 0;
  while(n>0){
      sum += (n%10) ;
      n /= 10;
  }
  return sum;
}
int main(){
  int n = 1234;
  cout << sumofdigit(n) << endl;
  return 0;
}
