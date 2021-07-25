#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7
#define size 10

class Stack{
  int *arr;
  int top;
  public:
  Stack(){
    arr = new int[size];
    top = -1;
  }
  void push(int data){
    if(top == size-1){
      cout << "Stack overflow" << endl;
      return;
    }
    top++;
    arr[top] = data;
  }
  void pop(){
    if(top == -1){
      cout << "stack underFlow" << endl;
      return;
    }
    top--;
  }
  int Top(){
    if(top== -1) return -1;
    return arr[top];
  }
  bool empty(){
    return top == -1;
  }
};


int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  Stack st;
  st.push(0);
  st.push(1);
  st.push(2);
  st.push(3);
  cout << st.Top() << endl;
  st.push(4);
  cout << st.Top() << endl;
  st.pop();
  st.pop();
  cout << st.Top() << endl;

  cout << st.empty()<< endl;
  

  return 0;
}
