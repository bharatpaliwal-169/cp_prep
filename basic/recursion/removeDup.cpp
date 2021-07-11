//remove the duplicate elements from the string(sorted only)
#include <bits/stdc++.h>
using namespace std;

string removeDup(string s){
  if(s.length() == 0) return "";
  char element = s[0];
  string restStr = removeDup(s.substr(1));
  if(element == restStr[0] ) return restStr;
  return (element + restStr);
}

int main(){
  string str;
  getline(cin, str);
  sort(str.begin(), str.end());
  cout << removeDup(str) << endl;
  return 0;
}

