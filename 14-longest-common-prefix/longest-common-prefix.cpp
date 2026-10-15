class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer = "";
        sort(strs.begin(), strs.end());
        string one = strs[0];
        string last = strs[strs.size() - 1];
        int itr = 0;
        while(itr < one.size() && itr < last.size()){
            if(one[itr] == last[itr]){
                answer+= one[itr];
                itr++;
            }else break;
        }
        return answer;
    }
};