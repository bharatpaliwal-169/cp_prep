#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

int main(){
  set<char>s;
  s.insert('a');
  s.insert('e');
  s.insert('i');
  s.insert('o');
  s.insert('u');

  string vow = "";
  string cont = "";
  string ip = "";
  getline(cin,ip);

  for(int i=0; i<ip.length(); i++){
    if(s.find(ip[i])!=s.end()){
      vow += ip[i];
    }
    else{
      cont += ip[i];
    }
  }

  cout << vow << endl << cont << endl;
}