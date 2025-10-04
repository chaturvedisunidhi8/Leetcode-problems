//There is an integer array nums sorted in ascending order (with distinct values).
//Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length)
  //such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3
  //and become [4,5,6,7,0,1,2].
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0,end=n-1;
        while(st<=end){
           int  mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
        if(nums[st]<=nums[mid]){
           if(nums[st]<=target && target<=nums[mid]){
                 end=mid-1;
           }
           else{
            st=mid+1;
           }
            }
            else{
                if(nums[mid]<=target && target<=nums[end]){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }


return -1;

    }
};





