class Solution {
public:
//hint : use concept of sieve  
    void fillsieve(vector<bool>&sieve){
        int n = sieve.size() -1;
        for(int i = 2; i <= sqrt(n) ; i++){//~ O(n) // O(n * log(log(n))) --> sieve's TC
            for(int j = i*2 ; j <= n ; j+= i){
                sieve[j] = 0;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        int n = nums.size();
        int mx = -1;
        //finding the max
        for(int i = 0 ; i < n ; i++){
            mx = max(mx,nums[i]);
        }
        //traversing till max using sieve to find prime's less than max num
        vector<bool>sieve(mx+1,1); // 1 means prime
        if((mx+1) > 0) sieve[0] = 0;
        if((mx+1) > 1) sieve[1] = 0;
        fillsieve(sieve);
        //storing all the primes in vector since 
        //primes of largest num will be smaller than the number itself 
        vector<int>primes;
        for(int i = 2 ; i <= mx; i++){
            if(sieve[i] == 1) primes.push_back(i);
        }
        //making an array to flag if the ele stored in primes is 
        //present in the array already given 
        vector<bool>ifExists(primes.size(),0);
        for(int i = 0 ; i < nums.size() ; i++){
            int ele = nums[i];
            for(int j = 0 ; j < primes.size() ; j++){
                if(primes[j] > ele)break;
                if(ele % primes[j] == 0) ifExists[j] = 1;
            }
        }
        int count = 0;
        for(int i = 0 ; i < ifExists.size() ; i++){
            if(ifExists[i] == 1) count++;
        }
        return count;
    }
};