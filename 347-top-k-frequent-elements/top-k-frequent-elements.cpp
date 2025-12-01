class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        vector<vector<int>>bck(nums.size() + 1);
        for(auto i : nums)mp[i]++;
        for(auto i : mp){
            int num = i.first;
            int frq = i.second;
            bck[frq].push_back(num);
        }
        vector<int>ans;
        for(int i = bck.size() - 1; i >= 0 && ans.size() < k ; i--){
            for(int j : bck[i]){
                // here j is the number which has appeared bck[i]times. since back[i] is the frq itself
                ans.push_back(j);
                if(ans.size() == k)break;
            }
        }
        return ans;
    }
};