class Solution {
public:
    bool isPerfectSquare(long long x) {

    //     //O(LogN)
    //    int low = 0;
    //     int high = x;
    //     while(low <= high){
    //         long long mid = low + ((high-low)/2); 
             
    //         if((mid * mid) == x) return true;
    //         else if((mid * mid) > x) high = mid - 1;
    //         else low = mid + 1;
    //     }

    //     return false;

    //O(1)
    int root = sqrt(x);
    if(root*root == x) return true;
    else return false;

    }
};