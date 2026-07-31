// 121. Best Time to Buy and Sell Stock
// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include <vector>
#include <algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int buy = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {

            // Update the minimum buying price seen so far.
            buy = min(buy, prices[i]);

            // Calculate the profit if sold today.
            maxProfit = max(maxProfit, prices[i] - buy);
        }

        return maxProfit;
    }
};