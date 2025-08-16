class Solution {
public:
//tc : 0(3^n) sc : O(n) --> dp tc O(n^2) ...
    bool checkParen(string &s , int i , int c){
        if(c < 0)return false;
        if(i == s.length()){
            return(c == 0);
        }
        bool flag = false;
        if(s[i] == '(')return checkParen(s, i+1, c+1);
        if(s[i] == ')')return checkParen(s, i+1, c-1);
        if(s[i] == '*')
            return (checkParen(s, i+1, c+1) || checkParen(s, i+1, c-1) ||checkParen(s, i+1, c));
        return false;
    }
    bool checkValidString(string s) {
        // int count = 0;
        // return checkParen(s , 0 , count);
        
        //greedy approach : O(N)
        int open = 0;
        int close = 0;
        int len = s.length();
        for(int i = 0 ; i < len ; i++){
            if(s[i] == '(' || s[i] == '*')open++;
            else open--;
            if(open < 0)return false;
        }
        for(int i = len - 1 ; i >= 0 ; i--){
            if(s[i] == ')' || s[i] == '*')close++;
            else close--;
            if(close < 0)return false;
        }
        return true;
    }
};