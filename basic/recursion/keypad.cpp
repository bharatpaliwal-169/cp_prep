#include <bits/stdc++.h>
using namespace std;

string keypadArr[] = {"", "" , "abc", "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void type(string s , string ans){
  if(s.length() == 0 ){
    cout << ans << endl;
    return;
  }
  char element = s[0];
  string code = keypadArr[element - '0'];
  string ros = s.substr(1);
  for(int i = 0; i < code.length(); i++){
    type(ros, ans + code[i]);
  }
}

int main(){
  type("23" , "");
  return 0;
}
