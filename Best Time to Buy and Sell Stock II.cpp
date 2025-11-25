//You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

//On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. However, you can sell and buy the stock multiple times on the same day, ensuring you never hold more than one share of the stock.

//Find and return the maximum profit you can achieve.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProf=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                maxProf+=prices[i]-prices[i-1];
            }
        }
        return maxProf;
    }
};

 
