#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    int size = s.length();
    if(size <= 10){
      cout << s << endl;
    }
    else if(size > 10){
      string ans = "";
      ans += s[0] + to_string(size-2) + s[size-1];
      cout << ans << endl;
    }
  }
  return 0;
}

// https://codeforces.com/problemset/problem/71/A