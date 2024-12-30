class Solution {
public:
//apply concept of lower bound
    int arrangeCoins(long long n) {
        long long low = 1; 
        long long high = n;
        while(low <= high){
            long long mid = low + ((high - low)/2);
            long long k = mid*(mid+1)/2;
            if(k == n) return mid;
            if(k > n)high = mid - 1;
            else low = mid + 1;
        }
        return (int)high;
    }
};