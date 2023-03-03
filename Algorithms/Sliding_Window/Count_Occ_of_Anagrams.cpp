#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'


int CountOccurance(string &s, string &p){
  int ans = 0;
  unordered_map<char,int> m;
  for(auto &i : p) m[i]++;

  int count = m.size();
  int k = p.size();
  int i=0,j=0;

  while(j < s.size()){
    //calc
    if(m.find(s[j]) != m.end()){
      m[s[j]]--;
      if(m[s[j]] == 0) count--;
    }

    int win = j-i+1;

    if(win <k)j++;

    if(win == k){

      if(count == 0) ans++;

      //revert
      if(m.find(s[i]) != m.end()){
        m[s[i]]++;
        if(m[s[i]] == 1) count++;
      }

      i++;j++;
    }
  }
  return ans;
}

int main()
{
  string s,p;
  cin >> s;cin >> p;
  cout << CountOccurance(s,p) << nl; 

  return 0;
}


// simpler but slow approach could be to track map on each iteration.