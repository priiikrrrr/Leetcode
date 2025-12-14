class Solution {
public:
    bool isPalindrome(string s, int i, int j){
        while( i < j){
            if(s[i] != s[j])return false;
                i++;
                j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(s[i] != s[j]){
                return isPalindrome(s, i+1 , j) || isPalindrome(s , i , j-1); //skipping a char , and checking if either of the statement is true returning true ; else , i++; j--;  similarly traverse all the string
            }
            i++;
            j--;
        }
           return true;
    }
};