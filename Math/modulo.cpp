#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll modularExponentiation(ll x,ll n,ll M) //2 3 3 
{
    ll result=1;
    while(n>0)
    {
        if(n % 2 == 1)
            result=(result * x)%M; //1*2%3 = 2 
        x=(x*x)%M; //4%3 =1 
        cout << x << endl;
        n=n/2; //1 
        cout << n << endl;
        cout << "op ->" << result << endl;
    }
    return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
  cout << modularExponentiation(2,3,9) << endl;
	return 0;
}
// INT_MAX;10^9 int 10^18 */ %