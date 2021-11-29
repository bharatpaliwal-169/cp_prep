#include<bits/stdc++.h>
using namespace std;

// find the max sum of all non adjacent elements in the vector.

int solve(vector<int>& nums) {
    int n = nums.size();
    if(n==0) return 0;
    vector<int> dp(n+1);
    // max sum either 0 or 1st +ve
    dp[1] = (nums[0] >=0) ? nums[0] : 0;
    for(int i=2;i<=n;i++){
        // include i-2th term and check if max sum is greater, for items < i-1.
        dp[i] = max(nums[i-1]+dp[i-2] , dp[i-1]);
    }
    return dp[n];
}