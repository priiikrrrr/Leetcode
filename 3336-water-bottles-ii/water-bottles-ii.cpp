class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int db = 0; 
        int eb = 0;
        while(eb >= numExchange || numBottles != 0){
            if(eb < numExchange){
                eb += numBottles;
                db += numBottles;
                numBottles -= numBottles;
            }else{
                //eb > numExchange;
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