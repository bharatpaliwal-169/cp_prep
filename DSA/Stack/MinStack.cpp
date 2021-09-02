// Implementing min stack without using extra space i.e o(1);

#include<bits/stdc++.h>
using namespace std;

class MyStack{
  public:
  stack<int>s;
  int minElement = INT_MIN;

  int getMin(){
    if(s.empty()) return -1;
    return minElement;
  }

  void push(int x){
    if(s.empty()){
      s.push(x);
      minElement = x;
    }
    else{
      if(x >= minElement){
        s.push(x);
      }
      else if(x < minElement){
        //flag
        s.push(2*x - minElement);
        minElement = x;
      }
    }
  }
  void pop(){
    if(s.size()==0)return;
    else{
      if(s.top() >= minElement){
        s.pop();
      }
      else if(s.top() < minElement){
        minElement = 2*minElement - s.top();
        s.pop();
      }
    }
  }
  int top(){
    if(s.empty())return -1;
    else{
      if(s.top() >= minElement) return s.top();
      else if(s.top()< minElement) return minElement;
    }
  }
};


int main(){
  MyStack st;
  st.push(5);
  cout << st.top() << endl;
  st.push(7);
  cout << st.top() << endl;
  st.push(3);
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  st.pop();
  cout << st.top() << endl;
  
  return 0;
}

// https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/