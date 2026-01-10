class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int hi = x;
        while(low <= hi){
            long long mid = low + (hi - low)/2;
            if((mid * mid ) == x)return mid;
            else if((mid * mid) > x)hi = mid - 1;
            else low = mid + 1;
        }
        return hi;






        
    }
};