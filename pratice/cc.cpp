#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

ull noOfdigits(ull n){
    ull count = 0;
    while(n > 0){
        count++;
        n = n/10;
    }
    return count;
}

ull factorial(ull n){
    if(n==0) return 1;
    return factorial(n-1);
}

ull productOfDigits(ull n){
    ull ans = 1;
    while(n>0){
        ans *= (n%10);
        n /= 10;
    }
    return ans;
}



int main() {
	ull t;cin >> t;
	ull N;
	ull ans=0;
	while(t--){
	    cin >> N;
	    for(int i=1;i<N;i++){
	        if(productOfDigits(i) >= factorial(i)){
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}
