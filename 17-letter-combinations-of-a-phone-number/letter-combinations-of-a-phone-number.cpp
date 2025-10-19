class Solution {
public:
    void solve(int index , string digits, string str, vector<string>&ans, unordered_map<char,string>mp){
        if(str.size() == digits.size()){
            ans.push_back(str);
            return;
        }
        for(int i = 0 ; i < mp[digits[index]].size() ; i++){
            str += mp[digits[index]][i];
            solve(index + 1 , digits , str, ans, mp);
            str.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0){
            return {};
        }
        vector<string>ans;
        unordered_map<char,string>mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        solve(0 , digits, "" , ans , mp);
        return ans;
    }
};