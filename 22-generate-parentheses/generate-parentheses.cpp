class Solution {
public:
    void solve(int n , string s , int open, int close, vector<string>&ans){
        if(open == 0 & close == 0){
            ans.push_back(s);
            return;
        }
            string op1 = s;
            string op2  = s;
            if(open > 0){
                op1.push_back('(');
                solve(n, op1, open-1 , close, ans);

            }
            if(close > open){
                op2.push_back(')');
                solve(n , op2, open, close-1, ans);
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open = n ; 
        int close = n;
        solve(n , "" , open , close, ans);
        return ans;
    }
};