//Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
//A circular array means the end of the array connects to the beginning of the array. Formally, the next element of nums[i] is nums[(i + 1) % n] and the previous element of nums[i] is nums[(i - 1 + n) % n].
//A subarray may only include each element of the fixed buffer nums at most once. Formally, for a subarray nums[i], nums[i + 1], ..., nums[j],
//there does not exist i <= k1, k2 <= j with k1 % n == k2 % n.

class Solution {
public:
    int maxSubarraySumCircular(vector<int> &nums) {
        int n = nums.size();
        int mn = INT_MAX, mx = INT_MIN;
        int sum1 = 0, sum2 = 0, total = 0;

        for (int i = 0; i < n; i++) {
            total += nums[i];

            sum2 = min(nums[i], sum2 + nums[i]);
            mn = min(mn, sum2);

            sum1 = max(nums[i], sum1 + nums[i]);
            mx = max(mx, sum1);
        }

        if (mx < 0)
            return mx;

        return max(mx, total - mn);
    }
};
