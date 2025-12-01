class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>final;
        // unordered_map<char, int>mp1;
        // unordered_map<char, int>mp2;
        unordered_map<string, vector<string>>mp;
        if(strs.size() == 0)return {};
        if(strs.size() < 2){
            final.push_back(strs);
            return final;
        }

        for(string x : strs){
            string str = x;
            sort(str.begin(), str.end());
            mp[str].push_back(x);
        }
        for(auto x : mp){
            final.push_back(x.second);
        }
        return final;
    }
};