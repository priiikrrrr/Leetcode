class Solution {
public:
/*refernced concept of : pow(x,n) LC - 50*/ 
        const int MOD = 1e9 + 7;
    long long mypow(long long n, long long pow){
        if(pow == 0)return 1;
          long long half = mypow(n , pow/2);
         long long num = (half * half)% MOD; 
         if(pow % 2 == 1) num = (num*n) % MOD;
         return num;
        //   else return (half * half % MOD * n) % MOD;   /*rookie*/
    }
    int countGoodNumbers(long long n) {
        long long E = (n+1)/2;/*rookie*/
        long long O = n/2;
        // mypow(E, O);
        return (int)(mypow(5,E) % MOD*mypow(4,O) % MOD)% MOD;
        // return (int)ans;
    }
};