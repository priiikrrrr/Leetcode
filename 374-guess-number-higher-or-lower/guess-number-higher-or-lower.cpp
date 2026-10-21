/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int hi = n;
        int lo = 0;
        while(hi >= lo){
            int mid = lo + (hi - lo)/2;
            if(guess(mid) == 0)return mid; 
            else if(guess(mid) == -1)hi = mid-1; 
            else lo = mid + 1;
        }
        return - 1;
    }
};