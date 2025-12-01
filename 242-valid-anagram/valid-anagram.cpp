class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char , int> mp;
        unordered_map<char , int> sp;
        if(s.length()!= t.length())return false;
        for(int i = 0 ; i < s.length() ; i++){
            mp[s[i]]++;
        }
        for(int i = 0 ; i < t.length() ; i++){
            sp[t[i]]++;
        }

        for(auto i : mp){
            char ch = i.first;
            int frq = i.second;

            if(sp.find(ch) != sp.end()){
                int frq1 = sp[ch];// finding the frequency of the character ch , if we find it in string t.
                //and now if the freq of that certain char found in t & s matches we return true, else false;
                if(frq1 != frq)return false;
            }else{
                return false;
            }
        }
        return true;
    }
};