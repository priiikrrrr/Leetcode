class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int, int>mp;
        for(int i : nums)mp[i]++;
        vector<int>v;
        for(auto &j : mp){
            while(j.second > 0){
                v.push_back(j.first);
                j.second--;
            }
        }
        return v;
    }
};