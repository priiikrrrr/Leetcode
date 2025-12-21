class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while(n > 0){
            count += (n & 1);   // odd number check
            n =  n >> 1;        // n  =  n/2
        }
        if(n == 1)count++;
        return count;
    }
};