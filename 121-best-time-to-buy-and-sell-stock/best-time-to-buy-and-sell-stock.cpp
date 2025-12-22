class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int stockStart = prices[0];
        int currprofit = 0;
        for(int i  = 1 ; i < prices.size() ; i++){
            if(prices[i] > stockStart){
                //current price is greater than the price stock was bought at 
                // lets keep this as current profit ;
                currprofit = prices[i] - stockStart;
                
                maxprofit = max(maxprofit , currprofit);
            }
            //the curr price is lesser than the stock we are at ;
            else stockStart = prices[i];
        }
        return maxprofit;
    }
};