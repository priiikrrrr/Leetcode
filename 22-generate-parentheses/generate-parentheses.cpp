class Solution {
public:
void Parenthesis(string empty,vector<string>& answer,int pairs, int open, int close){
    if(close == pairs){
        answer.push_back(empty);
        return;
    }
    if(open <  pairs) Parenthesis(empty + '(',answer, pairs , open+1, close);
    if(close < open) Parenthesis(empty + ')',answer, pairs , open, close + 1);
}
    vector<string> generateParenthesis(int n) {
        vector<string>answer;
        Parenthesis("", answer,n, 0, 0);
        return answer;
    }
};