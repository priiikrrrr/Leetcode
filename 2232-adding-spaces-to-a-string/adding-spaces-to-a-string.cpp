class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string final;
        int len = s.size();
        int n = spaces.size();

        // int ip = 0;
        // while(ip < len){
        //     if(ip == spaces[sp])final.push_back(' ');
        //     ip++;
        //     sp++;
        // }
        // return final;

        int sp = 0; //spaces
        for(int i = 0 ; i < len ; i++){
            if(sp < n && i == spaces[sp]){
                final += " ";
                ++sp;
            }
            final += s[i];
        }
        return final;
    }
};