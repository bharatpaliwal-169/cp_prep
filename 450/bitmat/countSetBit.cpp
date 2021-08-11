#include<bits/stdc++.h>
using namespace std;

int countSetBit_basic(int n){
  int count = 0;
  while(n){
    count += n&1;
    n = n >> 1;
  }
  return count;
}

int csb(int n){
  if(n == 0) return 0;

  return (n&1) + csb(n>>1);
}

//best sol : kernighan algo
int countSetBit(int n){
  int count = 0;
  while(n){
    n &= (n-1);
    count++;
  }
  return count;
}
int main(){
  int n=3;
  cout << countSetBit(n) << endl;
  cout << countSetBit_basic(n) << endl;
  cout << csb(n) << endl;
  return 0;
}
