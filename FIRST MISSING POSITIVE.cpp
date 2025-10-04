//Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
         int n = nums.size();
          for (int i=0; i<n; i++){
              if(nums[i]> 0&& nums[i] <= n){
                  int index =nums[i]-1;
                  if(nums[index] != nums[i]){
                      swap(nums[i], nums[index]);
                      i--;
                  }
              }
          }
          for (int i=0;i<n;i++){
              if(nums[i] !=i+1)
              return i+1;
          }
          return n+1;
    

    }
};
