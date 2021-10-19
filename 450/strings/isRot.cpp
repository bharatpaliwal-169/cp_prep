#include<bits/stdc++.h>
using namespace std;

bool isRotation(string s1,string s2){
  if(s1.size() != s2.size()) return false;
  queue<char> q1;
  for(int i = 0; i < s1.size(); i++){
    q1.push(s1[i]);
  }
  queue<char> q2;
  for(int i = 0; i < s2.size(); i++){
    q1.push(s2[i]);
  }

  int k = s2.size();
  while (k--)
  {
    char temp = q2.front();
    q2.pop();
    q2.push(temp);
    if(q1 == q2) return true;
  }
  return false;
}

int main(){
  string s1 = "ABCD";
  string s2 = "DABC";

  cout << isRotation(s1,s2);
  return 0;
}