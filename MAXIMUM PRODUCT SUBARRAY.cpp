//Given an integer array nums, find a subarray that has the largest product, and return the product.
//The test cases are generated so that the answer will fit in a 32-bit integer.
class Solution {
public:
    int maxProduct(vector<int>& nums) {
     if(nums.empty()) return 0;
int maxP=nums[0],minP=nums[0],res=nums[0];
for(int i=1;i<nums.size();i++){
    if(nums[i]<0) swap(maxP,minP);
    maxP=max(nums[i],maxP*nums[i]);

    minP=min(nums[i],minP*nums[i]);

    res=max(res,maxP);
}


return res;


    }
};


