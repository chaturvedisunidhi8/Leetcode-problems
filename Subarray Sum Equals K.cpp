//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

//A subarray is a contiguous non-empty sequence of elements within an array

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k) count++;
            }
        
        }
        return count;
    }
};
