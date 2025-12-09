class Solution {
public:
    int maxPower(string s) {
        int sld = 0;
        int sldmax = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == s[i+1]){
                sldmax++;
                sld = max(sldmax, sld);
            }else sldmax = 0;
        }
        return sld+1;
    }
};