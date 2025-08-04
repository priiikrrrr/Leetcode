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
        //map1  k har ele p gye
        for(auto x : m1){
            //key aur value store ki
            char ch1 = x.first;
            int frq1 = x.second;
            //map2 main respective key dhundhi
            if(m1.find(ch1) != m2.end()){
                //& then compare ki 
                int frq2 = m2[ch1];//gives the value of key, i.e inc of frq
                if(frq1 != frq2)return false;
            }
            else return false;
        }
        return true;
    }
};