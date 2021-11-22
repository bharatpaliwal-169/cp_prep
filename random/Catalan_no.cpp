//catalan numbers

// Cn = Sum(Ci*Cn-i) from i=0 to n
// eg c3 = c0c2 + c1c1 + c2c0 = 5
//defined that c0 = 1,c1 = 1 and c2 = 2 and so on.....
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