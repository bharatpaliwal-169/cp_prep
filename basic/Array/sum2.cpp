// given arr like 2,7,11,15 and target = 9 return [0,1] as ans , [3,2,4] target = 6, ans = [1,2]

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 10e9+7

class Solution {
public:
    //2 pointer tech
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int a[n];
        for(int i=0;i<n;i++)
            a[i] = nums[i];
        
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int l = 0,r = nums.size()-1;
        while(l<r){
            int sum = nums[l] + nums[r];
            if(sum == target)break;
            else if(sum > target)r--;
            else l++;
        }
        for(int i=0;i<n;i++){
            if(nums[l] == a[i])ans.push_back(i);
            else if(nums[r] == a[i])ans.push_back(i);
        }
        
        return ans;
    }
    //solution using map
      vector<int> twoSumMap(vector<int>& nums, int target) {
        vector<int> v1;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int ans=target-nums[i];
            if(mp.count(ans)>0 && mp[ans]!=i){
                v1.push_back(i);
                v1.push_back(mp[ans]);
                break;
            }
        }
        return v1;
    }
};

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}

// https://leetcode.com/problems/two-sum/