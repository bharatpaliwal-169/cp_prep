#include<bits/stdc++.h>
using namespace std;

int countBit(int n){
  int count = 0;
  while(n){
    n = n & (n-1);
    count++;
  }
  return count;
}

int flippedBit(int a,int b){
  return countBit(a^b);
}

int main(){
  int a = 8,b=0;
  cout << flippedBit(a,b) << endl;
  return 0;
}
