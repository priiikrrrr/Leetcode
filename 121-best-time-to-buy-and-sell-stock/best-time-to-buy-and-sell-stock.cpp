class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        int currp = 0;
        int buystock = prices[0];
        for(int i = 1 ; i < prices.size() ; i++){
            if(prices[i] > buystock){
//right day to sell the stock , given buy price is lesser than the upcoming day stock price
                currp = abs(buystock - prices[i]);
                maxp = max(maxp, currp);
            }
            //if the day we are at price is lesser than the stock we have bought
            //signifies we couldve bought the stock on lower price hence , buying that one 
            else buystock = prices[i];
        }
        return maxp;
    }
};