//A peak element is an element that is strictly greater than its neighbors.

//Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

//You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

//You must write an algorithm that runs in O(log n) time.

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
 int n = nums.size();
        int st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            
            bool left = (mid == 0 || nums[mid] > nums[mid - 1]);
            bool right = (mid == n - 1 || nums[mid] > nums[mid + 1]);

            if (left && right) {
                return mid;
            } else if (mid > 0 && nums[mid - 1] > nums[mid]) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return -1;
    }
};

