class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())return false;
        vector<int>arr(26,0);
        for(int i = 0 ; i < s.size() ; i++){
            arr[s.at(i) - 'a']++;
            arr[t.at(i) - 'a']--;
        }
        for(int j : arr){
            if(j != 0)return false;
        }
        return true;
    }
};