//You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
//Merge nums1 and nums2 into a single array sorted in non-decreasing order.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx=m+n-1,i=m-1,j=n-1;


        while(i>=0 && j>=0){
            if(nums1[i]>nums2[j]){
                nums1[idx--]=nums1[i--];
            }
            else{
                nums1[idx--]=nums2[j--];
            }
        }
        while(j>=0){
            nums1[idx--]=nums2[j--];
        }
    }
};
