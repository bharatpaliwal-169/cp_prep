#include <bits/stdc++.h>
using namespace std;

void dec(int n){
  if(n < 0) return;
  cout << n << " " ;
  dec(n-1);
}

// void inc(int n,int m){
//   if(m > n) return;
//   cout << m << " " ;
//   inc(n,m+1);
// }

void inc(int n){
  if(n < 0) return;
  inc(n-1);
  cout << n << " " ;
}

int main(){
  int n; cin >> n;
  dec(n);
  cout << endl;
  // inc(n,0);
  inc(n);
  return 0;
}
