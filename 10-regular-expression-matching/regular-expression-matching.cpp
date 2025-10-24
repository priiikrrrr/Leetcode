class Solution {
public:
    bool matcher(string s, string p){
        if(p.length() == 0){
            if(s.length() == 0)return true;
            else return false;
        }
        if(p.size() >= 2 &&  p[1] == '*'){
            //dont take astrik
            bool reject = matcher(s, p.substr(2));
            //take astrik
            bool accept = (!s.empty() && (p[0] == s[0] || p[0] == '.')) && matcher(s.substr(1), p);

            return reject || accept;
        }else{
            //p[1]  != '*'
            //simply match the characters given
            return (!s.empty() && (p[0] == s[0] || p[0] == '.')) && matcher(s.substr(1), p.substr(1));
        }
    }
    bool isMatch(string s, string p) {
        return matcher(s, p);
    }
};