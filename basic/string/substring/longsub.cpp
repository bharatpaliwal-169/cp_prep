//longest substring without repeating chars
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<int> dict(256,-1);
  int length = 0,start = -1;
  for(int i=0; i<s.length(); i++){
    if(dict[s[i]] > start){
      start = dict[s[i]];
    }
    dict[s[i]] = i;
    length = max(length, i-start);
  }

  cout << length << endl;
}
