#include<bits/stdc++.h>
using namespace std;

string decToBinary(int n,int bits){
  string ans = "";
  for(int i=bits-1;i>=0;i--){
    int k = n>>i;
    if(k& 1){
      ans += "1";
    }
    else{
      ans += "0";
    }
  }
  return ans;
}

int main(){
  int x = 8;
  cout << decToBinary(x,32) << endl;
}