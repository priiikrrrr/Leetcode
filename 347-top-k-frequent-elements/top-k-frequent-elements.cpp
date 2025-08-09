struct customcomp{
    bool operator()(pair<int,int> &a, pair<int,int> &b) {
        return a.second < b.second; 
    }    
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, customcomp> pq;
        unordered_map<int,int>mp;
        for(int i : nums)mp[i]++;
        for(auto &i : mp)pq.push({i.first, i.second});
        while(k){
            ans.push_back(pq.top().first);
            pq.pop();
            k--;
        }
        return ans;
    }
};