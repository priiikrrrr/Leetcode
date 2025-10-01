class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int db = 0;
        int eb = 0;
        // db = numBottles;
        
        while(numBottles > 0){
            db += numBottles;
            eb += numBottles;
            numBottles = eb/numExchange;
            eb = eb % numExchange;
        }
        return db;
    }
};