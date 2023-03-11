#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>

int Lsubuc(string& s){
  int i=0,j=0,ans=0;
  unordered_map<char,int>m;
  while(j<s.size()){
    m[s[j]]++;
    if(m.size() == j-i+1){
      ans = max(ans,j-i+1);
    }
    if(m.size() < j-i+1){
      while(m.size() < j-i+1){
        m.erase(s[i]);
        i++;
      }
    }
    j++;
  }
  return ans;
}

int main(){
  string s;
  cin >> s;
  int res = Lsubuc(s);
  cout << res << endl;
  return 0;
}

// io
// s = " pwwkew " -> 3
// s = " aabacebebebe " -> 4