#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin >> t;
	while(t--){
	    int x,y;
	    cin >> x >> y;
	    string str;
	    cin >> str;
	    int n = str.length();
	    int ones=0,streak=0,maxStreak=0;
	    for(int i=0;i<n;i++){
	        if(str[i] == '1'){
	            ones++;streak++;
	        }
	        else{
	            streak = 0;
	        }
	        maxStreak = max(maxStreak,streak);
	    }
      // cout << maxStreak << " <-> "<< ones << endl;
	    int salary = (x*ones) + (y*maxStreak);
	    cout << salary << endl;
	}
	return 0;
}