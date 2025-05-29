class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sumOfFactors = 0;
        for(int i = 1; i < sqrt(num); i++){
            if(num % i == 0) sumOfFactors += i;
        }
        for(int i = sqrt(num) ; i > 1 ; i--){
            if(num % i == 0) sumOfFactors+= num/i;
        }
        // if(sumOfFactors == num) return true;
        // else false;
        return(sumOfFactors == num);
    }
};

//TLE Brute way -: 
/*
int sum = 0;
for(int i = 1; i < n ; i++) if(n % i) sum += i;
return (sum == n)
*/