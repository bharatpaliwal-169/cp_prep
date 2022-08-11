// find all substring of a given string
#include <bits/stdc++.h>
using namespace std;

void substr(string s, string ans){
  if(s.length() == 0){
    cout << ans << endl;
    return;
  } 

  char ele = s[0];
  string restStr = s.substr(1);
  substr(restStr, ans);
  cout << ans << endl;
  substr(restStr,(ans + ele));
}
int main(){
  substr("ABC" , "");
  return 0;
}

