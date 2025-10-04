// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.


class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return nums;
        int first = 0, second = 1;
        int fc = 0, sc = 0;
        for (int num : nums) {
            if (num == first) {
                fc++;
            } else if (num == second) {
                sc++;
            } else if (fc == 0) {
                first = num;
                fc = 1;
            } else if (sc == 0) {
                second = num;
                sc = 1;
            } else {
                fc--;
                sc--;
            }
        }
        fc = sc = 0;
        for (int num : nums) {
            if (num == first) fc++;
            else if (num == second) sc++;
        }
        vector<int> res;
        if (fc > n / 3) res.push_back(first);
        if (sc > n / 3) res.push_back(second);
        return res;
    }
};
