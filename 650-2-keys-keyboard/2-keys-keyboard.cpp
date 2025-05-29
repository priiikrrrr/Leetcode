class Solution {
public:
    int gd(int n){
        for(int i = n/2 ; i >= 1 ; i--){
            if(n % i == 0)return i;
        }
        return 1;
    }

    int optimizedGd(int n){
        for(int i = 2; i <= sqrt(n) ; i++){//this will give us smallest factor 
        // n/i of smallest factor will give us the largest factor 
            if(n % i == 0)return n/i;
        }
        return 1;
    }

    bool isPrime(int n){
        if(n==1)return false;
        for(int i = 2; i <= sqrt(n) ; i++){//O(sqrt(n))
            if(n%i==0) return false;
        }
        return true;
    }

    int minSteps(int n) {
        if(n == 1) return 0;

       /* if(isPrime(n)) return n;
        int count = 0;
        while(n > 1){ //O(logN)
            int highFactor = optimizedGd(n);
            count += (n/highFactor);
            n = highFactor;
        }
        */
        int count = 0;
        while(n > 1){//O(sqrt(n))
            if(isPrime(n)){
                count += n;//O(sqrt(n))
                break;
            }
            int highFactor = optimizedGd(n); //O(sqrt(n))
            count += (n/highFactor);
            n = highFactor;
        }
        return count;
    }
//hence , this code will have a tc of O((n)) since only one of inner loop will work 
};



//hint - 
//1) think in reverse 
//2) find current num's highest factor except num 
/*
for instance if n = 20 
1) think in reverse if i have 20 A's how to reach till 1 in optimized way
2) highest factor of 20 , except 20 is 10 
--> thought process can be : 
if i had 10 A's then i couldve doubled it with a copy n paste(20/10) i.e 2 OP 
then again from 
1) 10 to 1 optimized way
2) highest factor 10 , except 10 is 5 
--> though process can be : 
if i had 5 A's then i could double it w a copy n paste (10/5) i.e 2 OP 
then 5 itself prime number 
therefore number of moves req for a prime num is prime num itself   
INITIATE A COUNTER = 2 + 2 + 5 = 9 OP (CPPPP,CP,CP)
*/