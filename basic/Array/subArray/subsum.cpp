#include<bits/stdc++.h>
using namespace std;
//subarray that sums up to the given number S.
int main()
{
  int N;cin >> N;
  int A[N];
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  int S;
  cin >> S;
  int i=0,j=0,start=-1,end=-1,sum=0;

  while(j<N && sum + A[j] <= S){
    sum += A[j];
    j++;
  }
  if(sum == S){
    cout << i+1 << " " << j << endl;
    return 0;
  }

  while(j<N){
    sum += A[j];
    while(sum > S){
      sum -= A[i];
      i++;
    }
    if(sum == S){
      start = i+1;
      end = j+1;
      break;
    }
    j++;
  }

  cout << start << " " << end << endl;

  return 0;
}
