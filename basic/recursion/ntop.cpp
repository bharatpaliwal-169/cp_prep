#include <bits/stdc++.h>
using namespace std;

int npowp(int x,int y) {
  if(y == 0){
    return 1;
  }
  return x * npowp(x,y-1);
}

int main(){
  int n,p;
  cin >> n >> p;
  cout << npowp(n,p) << endl;
  return 0;
}
