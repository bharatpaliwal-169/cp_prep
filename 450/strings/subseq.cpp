#include<bits/stdc++.h>
using namespace std;

void printSubSequence(string input, string output){
  if(input.empty()){
    cout << output << endl;
    return;
  }

  string ros = input.substr(1);

  printSubSequence(ros, output + input[0]);
  printSubSequence(ros,output);
}

int main(){
  string input = "abcd";
  string output = "";
  printSubSequence(input, output);
  return 0;
}
