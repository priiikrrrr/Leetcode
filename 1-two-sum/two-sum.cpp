class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i = 0 ; i < nums.size(); i++){
            int ele = target -  nums[i];
            if(m.find(ele) != m.end()){ //O(1)
                ans.push_back(m[ele]);
                ans.push_back(i);
            }
            else m[nums[i]] = i ;
        }
        return ans;
    }
};