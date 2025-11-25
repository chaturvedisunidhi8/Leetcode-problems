//Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

//Notice that the solution set must not contain duplicate triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>>ans;
       sort(nums.begin(),nums.end());
       int n=nums.size();
       for(int i=0;i<n;i++){
        int a=nums[i];
         int st=i+1;
         int end=n-1;
         int t=-a;
         while(st<end){
            if(nums[st]+nums[end]==t){
                ans.push_back({nums[i],nums[st],nums[end]});
                while(st<end && nums[st]==nums[st+1]) st++;
                while(st<end && nums[end]==nums[end-1]) end--;
                st++;
                end--;
            }
            else if(nums[st]+nums[end]>t){
                end--;
            }
            else{
              st++;
            }

         }
         while(i+1<n && nums[i+1]==nums[i]) i++;
       }
       return ans;
    }
};
