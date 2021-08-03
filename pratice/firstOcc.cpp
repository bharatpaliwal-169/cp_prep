#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin>>n;
  int arr[n];
  for (int i=0; i<n; i++)
    cin >>arr[i];

  int size = 10e6+2;
  int idx[size]={-1};
  int minid = INT_MAX;

  for(int i=0; i<n; i++){
    if(idx[arr[i]] != -1){
      minid = min(minid, idx[arr[i]]);
    }
    else{
      idx[arr[i]] = i;
    }
  }

  if(minid == INT_MAX){
    cout << "ERROR" << endl;
  }
  else{
    cout << minid << endl;
  }
  return 0;
}
