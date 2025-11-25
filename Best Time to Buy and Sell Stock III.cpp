//You are given an array prices where prices[i] is the price of a given stock on the ith day.

//Find the maximum profit you can achieve. You may complete at most two transactions.

//Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price1=INT_MAX;
        int min_price2=INT_MAX;
        int profit1=0,profit2=0;
        for(int i=0; i<prices.size();i++){
            min_price1=min(min_price1,prices[i]);
            profit1=max(profit1,prices[i]-min_price1);
            min_price2=min(min_price2,prices[i]-profit1);
            profit2=max(profit2,prices[i]-min_price2);
        }
        return profit2;
    }
};
