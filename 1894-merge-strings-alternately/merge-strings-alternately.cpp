class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int lenofword1 = word1.length();
        int lenofword2 = word2.length();
        string ans = "";
        int i = 0;
        for(; i < lenofword1 && i < lenofword2 ; i++){
            // while(i < lenofword1 && lenofword2 > i){
                ans += word1[i];
                ans += word2[i];
            // }
        }
            if(lenofword1 > lenofword2){
                ans += word1.substr(i);
            }
            if(lenofword2 > lenofword1){
                ans += word2.substr(i);
            }
        return ans;
    }
};