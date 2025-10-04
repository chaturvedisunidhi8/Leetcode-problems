 /*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
 Return the maximum amount of water a container can store.*/







class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp)
        {
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);

            int currWater=w*ht;
            maxWater=max(maxWater,currWater);
            height[lp] < height[rp]? lp++ : rp--;
        }

return maxWater;


    }
};
