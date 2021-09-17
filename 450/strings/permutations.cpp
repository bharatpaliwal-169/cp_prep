#include<bits/stdc++.h>
using namespace std;

vector<string>find_permutation(string s)
  {
      // Code here there
      vector<string> ans;
      sort(s.begin(),s.end());
      do{
          ans.push_back(s);
      }while(next_permutation(s.begin(),s.end()));
      return ans;
  }