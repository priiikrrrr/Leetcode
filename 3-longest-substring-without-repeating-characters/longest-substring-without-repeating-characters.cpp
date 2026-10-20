class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int len = 0;
        int maxLen = 0;
        unordered_set<char>str;
            for(int j = 0; j < s.size() ; j++){
                //if the element is already in the set , then keep removing an ele from the start of the set , till we dont have a dupe anymore
                while(str.find(s[j]) != str.end()){
                    str.erase(s[i]);
                    i++;
                }
                //check there is no dupe , insert a new ele in the set , note their window size
                if(str.find(s[j]) == str.end()){
                    str.insert(s[j]);
                    len = str.size();
                }
                //check for the maxLen possible on every iteration of removing dupe & adding new 
                maxLen = max(maxLen, len);
            }
            //return the max found by far. 
        return maxLen;
    }
};