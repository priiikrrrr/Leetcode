class Solution {
public:
    string countAndSay(int n) {
        if(n == 1) return "1";
        string str = countAndSay(n-1);
        //str = 3322251 => "23 32 15 11"
        //when frequency type of concept get used in string, 
        //separate the first letter of string and traverse the rest of the string
        string finalString = "";
        int frequency  = 1;
        char ch = str[0];
        for(int i = 1; i < str.length(); i++){
            char ch2 = str[i];
            if(ch == ch2){  
                frequency++;
            }else{
                //ch != ch2
                finalString += (to_string(frequency) + ch);
                frequency = 1;
                ch = ch2;
            }
        }
        finalString += (to_string(frequency) + ch);
        return finalString;
    }
};