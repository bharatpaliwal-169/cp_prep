#include<bits/stdc++.h>
using namespace std;

void reverse(string s){
  stack<string> store;
  for(int i=0;i<s.length();i++){
    string word = "";
    while(s[i] != ' ' && i < s.length()){
      word+= s[i];i++;
    }
    store.push(word);
  }
  while(!store.empty()){
    cout << store.top() << " ";
    store.pop();
  }
  cout << endl;
}

int main(){
  string s = "Hey, how are you doing?";
  reverse(s);
  return 0;
}
