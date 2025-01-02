class Solution {
public:
    /*
        bool isperfectSq(long long n) {
            long long root = sqrt(n);
            if (root * root == n)
                return true;
            else
                return false;
        }
        bool judgeSquareSum(long long c) {
            // brute force -> O(c)
            long long x = 0;
            long long y = c;

            while (x <= y) {
                if (isperfectSq(x) && isperfectSq(y)) {
                    return true;
                }
                x++;
                y--;
            }
            return false;
        }
    */

    bool isperfectSq(long long n) {
        long long root = sqrt(n);
        if (root * root == n)
            return true;
        else
            return false;
    }
    bool judgeSquareSum(long long c) {
        // brute force -> O(c)
        long long x = 0;
        long long y = c;

        while (x <= y) {
            if (isperfectSq(x) && isperfectSq(y)) {
                return true;
            } else if (!isperfectSq(y)) { //y is greater num ; therefore dec
                y = (int)sqrt(y) * (int)sqrt(y); // agar y perfect sq nhi hai toh banao usko
                    x = c - y;
            } else { // x is not perfect sq // x is smaller -> make it larger --> make it perfect sq
                x = (int)(sqrt(x) + 1) * (int)(sqrt(x) + 1); // to avoid infinte loop and get an element
                                   // just greater than the number we are at and
                                   // is a perfect sq
                y = c - x;
            }
        }
        return false;
    }
};