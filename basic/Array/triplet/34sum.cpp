#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res; 
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<nums.size(); i++){
// 
            if (i != 0 && nums[i] == nums[i-1]) continue; //Prevent consecutive numbers
            
            for(int j=i+1; j<nums.size(); j++){
                if (j != i+1 && nums[j] == nums[j-1]) continue;
                
                int new_target = target - nums[i] - nums[j];
                int x = j+1, y = nums.size()-1;
                while(x < y){
                    int tmp = nums[x] + nums[y];
  //  
                    if (x != j+1 && nums[x] == nums[x-1]) {
                        x++;
                        continue;
                    }
                    
                    if(tmp > new_target){
                        y--;
                    }
                    else if(tmp < new_target){
                        x++;
                    }
                    else{
                        res.push_back({nums[i], nums[j], nums[x], nums[y]});
                        x++;
                        y--;
                    }
                }
            }
        }
        return res;
    }
};

class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>> v;

  
  sort(nums.begin(),nums.end());
  
  
  
  for(int i=0;i<nums.size();i++)
  {
      if(i>0 && nums[i]==nums[i-1])   continue;
        int j=i+1, k=nums.size()-1;
      
      
      while(j<k){
        
        if(nums[i]+nums[j]+nums[k]==0)
        {
            v.push_back({nums[i],nums[j],nums[k]});
            
            
            int val1=nums[j];
            while(j<k && nums[j]==val1) j++;
                
            
              int val2=nums[k];
            while(j<k && nums[k]==val2) k--;
                
        }
            
            else if(nums[i]+nums[j]+nums[k]<0)  j++;
              
            
              
            else if(nums[i]+nums[j]+nums[k]>0)  k--;
              
    }
  }
  
  
  return v;
  }
};
