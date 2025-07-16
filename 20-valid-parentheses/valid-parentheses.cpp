class Solution {
public:
  bool isValid(string s) {
        // if(s.length() % 2 != 0) return false;
        stack<char>st;
        for(int i = 0 ; i < s.length() ; i++){
            if((s[i] == '(') || s[i] == '[' || s[i] == '{')st.push(s[i]);
            else{
                if(st.size() == 0) return false;
            char t = st.top();
            if((s[i] == ')' && t != '(') ||(s[i] == '}' && t != '{')||(s[i] == ']' && t != '['))return false;
            st.pop();
        }        
        }
        if(st.size() == 0) return true;
        else return false;
    }
};