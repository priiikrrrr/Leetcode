class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int i = 0;
        int j = 0;
        while (i < word1.length() && j < word2.length()) {
            str += word1[i];
            i++;
            str += word2[j];
            j++;
        }
        while(i < word1.length()){
            str+= word1[i++];
        }    
        while(j < word2.length()){
            str+= word2[j++];
        }
        return str;
    }
};

    // int maxiLen = max(n , m);
    // for(int i = 0 ; i < maxiLen ; i++){
    //     if(i < word1.length()){
    //         str += word1[i];
    //     }
    //     if(i < word2.length()){
    //         str+= word2[i];
    //     }
    // }
    // return str;