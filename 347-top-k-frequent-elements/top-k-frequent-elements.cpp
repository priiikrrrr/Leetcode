class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>answer;
      unordered_map<int,int>mp;
      for(int  i = 0 ; i < nums.size(); i++){
        mp[nums[i]]++;
      }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minheap;
      for(auto i=mp.begin(); i != mp.end(); i++){
            minheap.push({i->second,i->first});
            if(minheap.size() > k) minheap.pop();
      }
      for(int i = 0 ; i < k ; i++){
        answer.push_back(minheap.top().second);
        minheap.pop();
      }
      return answer;
    }
};