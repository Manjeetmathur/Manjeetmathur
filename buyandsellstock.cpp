class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        // Update the minimum price if the current price is lower
        minPrice = min(minPrice, price);
        
        // Update the maximum profit if selling at the current price yields a better profit
        maxProfit = max(maxProfit, price - minPrice);
    }

    return maxProfit;   
    }
};