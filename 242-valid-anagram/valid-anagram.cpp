class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char,int>setOfAlpha;
        for(auto str : s)setOfAlpha[str]++;
        for(auto it  : t){
            auto store = setOfAlpha.find(it);
            if(store == setOfAlpha.end())return false;
            store->second--;
            if(store->second < 0)return false;
            
        }

        return true;
    }
};