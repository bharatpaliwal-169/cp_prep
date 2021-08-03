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
  for (int i=0; i<n; i++) cin >>arr[i];

  int maxi[n];
  maxi[0] = arr[0];

  for(int i=1; i<n; i++){
    maxi[i] = max(arr[i],maxi[i-1]);
  }
  for(int i=0;i<n;i++){
    cout << maxi[i] << " ";
  }
  return 0;
}
