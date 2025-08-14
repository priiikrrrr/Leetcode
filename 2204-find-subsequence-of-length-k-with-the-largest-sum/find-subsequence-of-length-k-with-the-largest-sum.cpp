bool cusComp(pair<int,int>&a, pair<int,int>&b){
    return a.second < b.second; // sorting on the basis of indices since they want the indices restored 
}
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq; //max heap
        for(int i = 0 ; i < nums.size() ; i++){
            pq.push({nums[i], i});
        }
        vector<pair<int,int>>ans;
        int sum = 0;
        while(k--){
            ans.push_back(pq.top());
            pq.pop(); 
        }
        sort(ans.begin(), ans.end(), cusComp);
        vector<int>finalAns;
        for(auto &p : ans)finalAns.push_back(p.first);
        return finalAns;   
    }
};