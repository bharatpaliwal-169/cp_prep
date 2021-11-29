#include<bits/stdc++.h>
using namespace std;

int catalan(int n){
  int result = 0;
  if(n <= 1) return 1;
  for(int i = 0; i < n; i++){
    result += catalan(i)*catalan(n-i-1);
  }
  return result;
}


int main(){
  int n ; cin >> n;
  cout << catalan(n) << endl;
  return 0;
}