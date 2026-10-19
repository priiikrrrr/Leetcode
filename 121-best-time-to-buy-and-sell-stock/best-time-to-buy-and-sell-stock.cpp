class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int minPrice = prices[0];
        int prev = 0;
        for(int i = 1 ; i < prices.size() ; i++){
            if(prices[i] < minPrice) minPrice = prices[i];
            profit = prices[i] - minPrice;
            prev = max(prev, profit);
        }    
        return prev;
    }
};