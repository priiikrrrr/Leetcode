class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int i = 0 ; i < arr.size() ; i++){
           m[arr[i]]++;
        }
        unordered_set<int>s;
        for(auto i : m){
            int ele = i.first;
            int occ = i.second;
            if(s.find(occ) != s.end())return false;
            else s.insert(occ);
        }
        return true;
    }
};