#include <bits/stdc++.h>
using namespace std;
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define nl '\n'
#define vi vector<int>

// we need to find the max element of each subarray of size k.
// question looks simple but is tricky

int main(){
  int k;cin >> k;
  int n;cin >> n;
  vi arr(n,0);
  for(int i=0;i<n;i++){
    int x;cin >> x;
    arr[i] = x;
  }
  
  cout << nl;
  return 0;
}