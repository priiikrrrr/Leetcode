class Solution {
public:
    bool isPalin(string s, int i, int j) {
        while (j >= i) {
            if (s[i] != s[j])
                return false;
            else {
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        if (s.size() == 0 || s.size() == 1)
            return true;
        // if (s.size() == 2) {
        //     if (s[0] == s[1])
        //         return true;
        //     else
        //         return false;
        // }
        // if (s.size() > 2) {
            int i = 0;
            int j = s.size() - 1;
            while (j >= i) {
                if (s[i] == s[j]) {
                    i++;
                    j--;
                } 
                else {
                    return isPalin(s, i + 1, j) || isPalin(s, i, j - 1);
                }
            }
            return true;
        // }
        return false;
    }
};