#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

int main(){
  int n;cin >> n;
  vector<int> a(n),ans;
  for(auto &i : a)
    cin >> i;
  
  sort(a.begin(), a.end());
  do{
    display(a);
  }while(next_permutation(a.begin(), a.end()));
  
  return 0;
}
