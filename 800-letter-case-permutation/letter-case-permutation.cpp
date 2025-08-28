class Solution {
public:
    void solve(string s , string final ,vector<string>&str){
        if(s.length() == 0){
            str.push_back(final);
            return;
        }
        if(isalpha(s[0])){
            char one = tolower(s[0]);
            char two = toupper(s[0]);
            string op1 = final;
            string op2 = final;
            op1.push_back(one);
            op2.push_back(two);
            // op1 = final.push_back(one);
            // op2 = final.push_back(two);
            s.erase(s.begin() + 0);
            solve(s, op1, str);
            solve(s, op2, str);
        }
        else{
            string op1 = final;
            // op1 = final.push_back(s[0]);
            op1.push_back(s[0]);
            s.erase(s.begin() + 0);
            solve(s , op1, str);
        }
    }
    vector<string> letterCasePermutation(string s) {
        string final = "";
        vector<string>str;
        solve(s, final , str);
        return str;
    }
};