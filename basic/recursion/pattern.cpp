#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)
{
  // Base case (When n becomes 0 or negative)
  if (n ==0 || n<0)
  {
    cout << n << " ";
    return;
  }
  // First print decreasing order
  cout << n << " ";
  printPattern(n-5);
  // Then print increasing order
  cout << n << " ";
}

int main()
{
  int n = 10;
  printPattern(n);
  return 0;
}
