#include <bits/stdc++.h>
using namespace std;

int frndPair(int n){
  if(n <= 2) return n;
  return frndPair(n-1) + frndPair(n-2)*(n-1);
        // single         //pair; for n their are n-1 partners.
}

int main() {
  cout << frndPair(4) << endl;
  return 0;

}
