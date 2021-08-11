#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7


int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;cin >> t;
  ll n;
  while(t--){
    cin >> n;

    int count = 0;
    // ll a=0,b=0,c=0,x=0;
    // ll arr[n+1][n+1];
    // for(ll i=0;i<n+1;i++){
    //   for (ll j=0;j<n+1;j++){
    //     arr[i][j] = 0;
    //   }
    // }

    // for(ll i=1;i<=n;i++){
    //   for (ll j=1;j<=n;j++){
    //     c = i%j;
    //     if(c==0) arr[i][j] = 0;
    //     else if(c!=0){
    //       if(j%c == 0){
    //         arr[i][j] = 1;
    //       }
    //     }
    //   }
    // }

    // for(ll i=1; i <= n; i++){
    //   for(ll j = 1; j <= n; j++){
    //     if(arr[i][j]==1) count++;
    //   }
    // }

    // for(int i=2; i < n+1; i++){
    //   for(int j = 2; j < n+1; j++){
    //     cout << arr[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    // i -> c j->b k -> a
    for(int i=1; i<=n;i++){
      for(int j=i; j<=n;j+=i){
        if(j%i == 0){
          for(int k=i;k<=n;k+=i){
            if(k%j== i){
              count++;
            }
          }
        }
      }
    }
    cout << count << endl;
  }

  return 0;
}
