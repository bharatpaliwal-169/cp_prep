//generate all balanced parentheses
#include<bits/stdc++.h>
using namespace std;

void solve(int open , int close, string op, vector<string> &res){
  if(open == 0 and close == 0){
    res.push_back(op);
    return;
  }

  if(open!=0){
    string temp1 = op;
    temp1 += '(';
    solve(open-1,close,temp1,res);
  }
  if(close > open){
    string temp2 = op;
    temp2 += ')';
    solve(open,close-1,temp2,res);
  }
  return;
}

vector<string> generate(int n){
  vector<string> res;
  int open = n,close = n;
  string op = "";
  solve(open,close,op,res);
  return res;
}

int main()
{
  int n;cin>>n;
  vector<string> ans = generate(n);
  for(auto &i : ans){
    cout << " [ "<< i << " ]";
  }
  cout << endl;
  return 0;
}
