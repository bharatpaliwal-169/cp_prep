// Max Sum SubArray of size k
#include<bits/stdc++.h>
using namespace std;

int LsubKuc(string& s,int& k){
  int i=0,j=0,ans=0;
  unordered_map<char,int>m;
  while(j<s.size()){
    m[s[j]]++;
    if(m.size() == k){
      ans = max(ans,j-i+1);
    }
    if(m.size() > k){
      while(m.size() > k){
        m[s[i]]--;
        if(m[s[i]] == 0) m.erase(s[i]);
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
  int k;cin >> k;
  int res = LsubKuc(s,k);
  cout << res << endl;
  return 0;
}

// io - eg-

// s = aabacbebebe
// o = 7
