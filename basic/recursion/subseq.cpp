// find all substring of a given string
#include <bits/stdc++.h>
using namespace std;

void subseq(string s, string ans){
  if(s.length() == 0){
    cout << ans << endl;
    return;
  } 

  char ele = s[0];
  string restStr = s.substr(1);
  subseq(restStr, ans);
  cout << ans << endl;
  subseq(restStr,(ans + ele));

}

int main(){
  subseq("ABC" , "");
  return 0;
}

