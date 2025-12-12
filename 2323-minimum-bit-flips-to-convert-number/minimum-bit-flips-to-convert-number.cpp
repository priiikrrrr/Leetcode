class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        //the ans now contains the required set bits in order to convert start -> goal
        //hence we may count the set bits of the ans , which will give us the number of set bits required to convert the start to goal 
        int count = 0;
        while(ans > 1){
            ans = (ans & ans -1);
            count++;
        }
        if(ans == 1)count++;
        return count;

    }
};