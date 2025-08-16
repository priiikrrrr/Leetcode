class Solution {
public:
//to find extra closed parenthesis check for number of open parenthesis left to right traversal
//to find extra open parenthesis check for number of close parenthesis right to left traversal
    string minRemoveToMakeValid(string s) {
        string final = "";
        int open = 0;
        int close = 0;
        int n = s.length();
        // for(char ch : s) if(s[i] >= 'a' && s[i] <= 'z')final += s[i];
        for(int i = 0 ; i < n ; i++){
            if(s[i] >= 'a' && s[i] <= 'z')final.push_back(s[i]);
            else if(s[i] == '('){
                open++;
                final.push_back(s[i]);
            }
            else if(open > 0){
                open--;
                final.push_back(s[i]);
            }
        }
        string final2 = "";
        for(int i = final.length() - 1 ; i >= 0 ; i--){
            if(final[i] >= 'a' && final[i] <= 'z')final2.push_back(final[i]);
            else if(final[i] == ')'){
                close++;
                final2.push_back(final[i]);
            }
            else if(close > 0){
                close--;
                final2.push_back(final[i]);
            }
        }
        reverse(begin(final2), end(final2));
        return final2;
    }
};