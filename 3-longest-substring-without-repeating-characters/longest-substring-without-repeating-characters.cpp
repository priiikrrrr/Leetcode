class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int len = 0;
        int maxLen = 0;
        unordered_set<char>str;
            for(int j = 0; j < s.size() ; j++){
                while(str.find(s[j]) != str.end()){
                    str.erase(s[i]);
                    i++;
                }
                if(str.find(s[j]) == str.end()){
                    str.insert(s[j]);
                    len = str.size();
                }
                maxLen = max(maxLen, len);
            }
        return maxLen;
    }
};