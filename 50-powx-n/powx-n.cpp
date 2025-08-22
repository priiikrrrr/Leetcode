class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0)return 1.0;
        if(n < 0){
            n = abs(n);
            x = 1/x;
        }
        double half = myPow(x , n/2);
        if(n % 2 == 0)return half*half;
        else return half * half * x;
    }
};