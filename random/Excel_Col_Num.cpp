#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string s)
{
    int result = 0;
    for (const auto& c : s)
    {
      result *= 26;
      result += c  - 'A' + 1;
    }
    return result;
}
string solve(int n) {
    char ans[100];
    int i=0;
    while(n>0){
        int rem = n%26;
        if(rem == 0){
            ans[i++] = 'Z';
            n = (n/26) - 1;
        }
        else{
            ans[i++] = (rem-1) + 'A';
            n /=26;
        }
    }
    ans[i] = '\0';
    reverse(ans, ans + strlen(ans) );
    string r = "";
    for(int i=0;i<strlen(ans);i++){
        r+= ans[i];
    }
    return r;
}