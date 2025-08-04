class Solution {
public:
    bool isAnagram(string s, string t) {
        //int -> frequency 
        //char is string's char
        if(s.length() != t.length())return false;
        unordered_map<char,int>m1; 
        unordered_map<char,int>m2;
        for(int i = 0 ; i < s.length() ; i++){
            m1[s[i]]++;
        } 
        for(int i = 0 ; i < t.length() ; i++){
            m2[t[i]]++;
        }
        for(auto x : m1){
            char ch1 = x.first;
            int frq1 = x.second;
            if(m1.find(ch1) != m2.end()){
                int frq2 = m2[ch1];//gives the value of key, i.e inc of frq
                if(frq1 != frq2)return false;
            }
            else return false;
        }
        return true;
    }
};