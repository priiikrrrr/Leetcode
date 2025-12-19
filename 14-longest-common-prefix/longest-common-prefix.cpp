class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        if(strs.size() == 1)return strs[0];
        sort(strs.begin(), strs.end());
        //using two pointer approach 
        //keeping one the min & other at the max
        string i = strs[0];
        string j = strs[strs.size() - 1];
        // int n = min(i , j);
        for(int k = 0 ; k < min(i.length(),j.length()) ; k++){
            if(i[k] == j[k]){
                str += i[k];
                // i++;
                // j++;
            }
            else{
                return str;
            }
        }
        return str;

    }
};