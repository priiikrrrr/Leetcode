class Solution {
public:
// const long long MOD = 1e9 + 7;
 long long MOD = 1000000007;
    long long expo(long long base, long long power){
        if(power == 0)return 1;
        if(power == 1)return (base % MOD);
        if(power % 2 == 0){
        long long half = expo(base, power/2);
            return (half *half) % MOD;
        }else{
            //restval % 2 == 1
            long long half = expo(base, power/2);
            return (((half*half)%MOD)* (base % MOD))% MOD;
        }
    }
    int minNonZeroProduct(int p) {
        long long val = pow(2,p);
        val -= 1;

        long long base = val - 1;
        long long power = val/2;
        long long result = expo(base, power);
        return result*(val%MOD)%MOD;
    }
};