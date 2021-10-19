#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //idea is to find the max size subarr with k 0's 
        int count =0 ,ans = 0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]){
                count++;
                ans = max(ans,count);
            }
            else count = 0;
        }
        
        return ans;
    }
};