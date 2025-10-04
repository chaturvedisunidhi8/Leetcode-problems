//You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
//Return the single element that appears only once.




class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return nums[0];

        int st = 0, end = n - 1;
        while (st < end) {  
            int mid = st + (end - st) / 2;

            
            if (mid == 0 && nums[0] != nums[1]) return nums[mid];
            if (mid == n - 1 && nums[n - 1] != nums[n - 2]) return nums[mid];

        
            if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1]) {
                return nums[mid]; 
            }

            
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid + 1]) {
                    st = mid + 2; 
                } else {
                    end = mid; 
                }
            } else {
                if (nums[mid] == nums[mid - 1]) {
                    st = mid + 1;  
                } else {
                    end = mid - 1;
                }
            }
        }

        return nums[st];  
    }
};
