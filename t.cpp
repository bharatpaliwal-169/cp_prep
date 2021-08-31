#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;cin>>t;
  while(t--){
    // cout << "test";
    int n; cin >> n;
    char alphabets[] = {'A','B','C','D','E',
      'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U',
      'V','W','X','Y','Z'
    };
    // for(int i=0;i<26;i++){
    //   cout << alphabets[i] << endl;
    // }
    string res = "";
    if(n <= 26){
      res += alphabets[n-1];
    }
    else if(n > 26){
      int loop = (n/26) + 1;
      int head = n%26;
      while(loop!=0){
        res += alphabets[head-1];
        loop--;
      }
    }

    cout << res << endl; 
    
  }
  return 0;
}