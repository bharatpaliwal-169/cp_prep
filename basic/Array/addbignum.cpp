#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

vector<ll> addBig(vector<ll>& num1 , vector<ll>& num2){
  ll n1 = num1.size();
  ll n2 = num2.size();

  ll len = max(n1,n2); 
  if(n1 > n2){
    while(n1 != len){
      num1.insert(num1.begin(),0);
      n1++;
    }
  }
  if(n2 > n1){
    while(n2 != len){
      num2.insert(num2.begin(),0);
      n2++;
    }
  }

  // add one extra msb bit as 0;
  vector<ll> ans(len+1);
  
  num1.insert(num1.begin(),0);
  num2.insert(num2.begin(),0);

  vector<ll> carry;
  for(ll i =0; i<len+1; i++){
    carry.push_back(0);
  }

  for(ll i=len; i>=0; i--){
    ll sum = num1[i] + num2[i] + carry[i];
    if(sum <= 9){
      ans[i] = sum;
    }
    
    if(sum > 9){
      carry[i-1] = 1;
      ans[i] = sum % 10;
    }
  }

  return ans;

}


int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n1,n2;
  cin >> n1;
  cin >> n2;

  vector<ll> num1(n1);
  vector<ll> num2(n2);

  for(ll i=0; i<n1; i++)
    cin >> num1[i];
  
  for(ll i=0; i<n2; i++)
    cin >> num2[i];
  
  vector<ll> result;
  result = addBig(num1, num2);
  for(ll i=0;i<result.size(); i++)
    cout << result[i] << " ";
  
  return 0;
}
