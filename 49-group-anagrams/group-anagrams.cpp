class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        string neww;
        for(int i = 0 ; i< strs.size(); i++){
            neww = strs[i];//storing current string in new var
                sort(strs[i].begin(),strs[i].end());//sorting the given string
                mp[strs[i]].push_back(neww);//storing it in map after sorting
            
        }

        //
        vector<vector<string>>result;
        for(auto i= mp.begin() ;i != mp.end(); ++i){
            result.push_back(i->second);

        }   
            return result;
    }
};