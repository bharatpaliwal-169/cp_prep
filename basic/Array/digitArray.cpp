#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

int array_to_num(vector<int> &a){
  int n = 0;
  for(int i=0;i<a.size();i++){
    n *= 10;
    n += a[i];
  }
  return n;
}

vector<int> num_to_array(int n){
  vector<int> ans;
  while(n>0){
    ans.push_back(n%10);
    n = n / 10;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}


int count_digit_in_num(int n){
  int count = 0;
  // while(n!=0){
  //   n = n/10;
  //   count++;
  // }
  count = floor(log10(n)) + 1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;cin >> n;
  vector<int> arr(n);
  for(int i =0;i<n;i++){
    cin >> arr[i];
  }
  
  int num = array_to_num(arr);
  cout << num << endl;
  
  int d;cin >> d;
  vector<int> res;
  res = num_to_array(d);
  for(auto i: res){
    cout << i << " ";
  }
  
  return 0;
}
