// Hard IMP Question
#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>


int solve(string& s,string& t){
  unordered_map<char,int> m;
  for(auto& i : t){
    m[i]++;
  }

  int count = m.size(); // count yeh dyan rakta hai ki map bhara hua hia ya nahi , cnt = 0 ka mtlab ab map empty hia 
  int i=0,j=0,ans = INT_MAX;
  
  while(j<s.size()){
    // s se vo sare t ke ele find out karo
    if(m.find(s[j]) != m.end()){
      m[s[j]]--;
      if(m[s[j]] == 0) count--;
    }

    // j ko vaha tak leke jaao jaha tak humko sabhi t ke ele mil gye ho.
    if(count == 0){

      while(count == 0){
        // ans nikalo, + note : yaha while loop mein hum win ko shrink kar rahe using i++ till we have cnt=0.
        ans = min(ans,j-i+1);
        if(m.find(s[i])!=m.end()){
          m[s[i]]++;
          if(m[s[i]]>0)count++;
        }
        i++;
      }

    }
    j++;
  }
  return ans;
}

// 2 variation -> return size,return string
int main(){
  string s,t;
  cin >> s;
  cin >> t;
  int ans = solve(s,t);
  cout << ans << nl;
  // cout << smallestWindow(s,t) << nl;
  return 0;
}

// string smallestWindow (string s, string t)
// {
//   unordered_map<char, int>map;
//   unordered_map<int, int>ans;  //map to store the size and initial index of answer window
//   for(auto x : t) map[x]++;
//   int i = 0, j = 0, count = map.size(), minsize = INT_MAX, n = s.size();
//   bool flag = true;
//   while(j<n){
//       if(map.find(s[j]) != map.end()){
//         map[s[j]]--;
//         if(map[s[j]] == 0) count--; //  If any character's count in the map becomes zero, decrementing the count variable
//       }
//       if(count > 0) j++;
//       else if (count == 0){
//           flag = false;
//           while(count == 0){
//               minsize = min(minsize, j-i+1); // a possible ans
//               if(ans.find(minsize) == ans.end())
//                 ans[minsize] = i; // Storing the minimum size of the window and initial index of string window
//               if(map.find(s[i]) != map.end()){
//                   map[s[i]]++;
//                   if(map[s[i]] == 1) count++; // If any character's count in the map becomes 1 from zero, incrementing count //variable
//               }
//               i++;
//           }
//           j++;
//       }
//   }
//   if(flag) return "-1";
//   string a;
//   for(int j = ans[minsize]; j< ans[minsize] + minsize; j++) a.push_back(s[j]);
//   // cout << minsize << nl;
//   return a;
// }
