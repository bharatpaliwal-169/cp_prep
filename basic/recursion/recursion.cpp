#include <bits/stdc++.h>
using namespace std;
//Recursion

int Rsum(int n){
  if(n==1)
    return 1;
  return n + Rsum(n-1);
}

void sumOfNumbers(){
  int n = 25;

  //method 1
  int forSum = 0;
  for(int i = 1; i <= n; i++){
    forSum += i;
  }
  cout << "Normal Approach :" << forSum << endl;
  // method 2
  cout << "Recursive Approach :" << Rsum(n) << endl;
}


int fact(int n){
  if(n==0) return 1;
  return n*fact(n-1);
}
void factorial(){
  int n = 6;
  cout << fact(n) << endl;
}


int fib(int n){
  if(n==0) return 0;
  if(n==1 || n==2) return 1;
  return (fib(n-1) + fib(n-2));
}
void fibonacci(){
  int n = 5;
  for(int i=0; i<n; i++){
    cout << fib(i) << endl;
  }
}

int main()
{
  // sumOfNumbers();
  // factorial();
  fibonacci();
  return 0;
}
