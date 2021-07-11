//reverse a string 
#include <bits/stdc++.h>
using namespace std;
void reverse(string s){
  if(s.length() == 0) return;
  string ros = s.substr(1);
  reverse(ros);
  cout << s[0] ;
}

// move all x to the ed of the string
string moveX(string s){
  if(s.length() == 0) return "";
  char element = s[0];
  string restStr = moveX(s.substr(1));
  if(element == 'x' || element == 'X') return (restStr + element);
  return (element + restStr);
}


int main(){
  // reverse("BINOD");
  cout <<  moveX("XXBXXXINxOxDxxxXXXopXx") << endl;
  // cout << endl;
  return 0;
}
