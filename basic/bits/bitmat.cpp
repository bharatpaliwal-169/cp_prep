#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos){
  return ( (n & (1<<pos)) != 0);
}

int setBit(int n,int pos){
  return ( n | (1<<pos) );
}

int clearBit(int n,int pos){
  int mask = ~(1<<pos);
  return (n & mask);
}

int updateBit(int n,int pos,int value){
  //clear
  int mask = ~(1<<pos);
  n = n & mask;
  //set
  return (n | (value<<pos));
}

int main()
{
  int n;cin >> n;

  //to get the bit at given position
  cout << getBit(n,2) << endl;
  //to set
  cout << setBit(n,1) << endl;
  //to delete
  cout << clearBit(n,3) << endl;
  //to update -> delete+set
  cout << updateBit(n,1,1) << endl;
  return 0;
}
