// TC : O(N);
// SC : O(N)using bucket sort : assis.
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mps;
        for(char i : s)mps[i]++;

        vector<vector<char>>sort(s.size() + 1);
        for(auto &i : mps)sort[i.second].push_back(i.first);

        string temp = "";
        for(int i = s.size() ; i > 0 ; i--){
            for(char t : sort[i])temp.append(i , t); //append i times , t 
        }
        return temp;
    }
};