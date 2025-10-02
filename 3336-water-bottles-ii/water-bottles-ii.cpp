class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int db = 0;
        int eb = 0;

        while(eb >= numExchange || numBottles != 0){
            if(eb < numExchange){
                db += numBottles;
                eb += numBottles;
                numBottles -= numBottles;
            }else{
                while(eb >= numExchange){
                    eb = eb - numExchange;
                    numExchange++;
                    numBottles++;
                }
            }
        }
        return db;
    }
};