class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //map the frequency
        unordered_map<int, int> mp;
        for (const int& i : nums)
            mp[i]++;
        //initialize the array to map the number of freq to the index , and the stored value in the vector to be the value of that particular index 
        vector<vector<int>> result(nums.size() + 1);
        //in the index of result push the value(index being the frequency of the value to be pushed)
        for (auto k : mp) {
            result[k.second].push_back(k.first);
        }
        vector<int> ans;
        //initialize another vec , traverse result from right to left, because indices are in sorted order ofc(0,1,2,3...)and here indices are the frequency 
        for (int j = result.size() - 1; j > 0; j--) {
            //while each index can have multiple element with the same freq , therefore, 
            //for each ele go inside that ele as well and push it to the ans. to find the top k 
            for (int l : result[j]) {
                ans.push_back(l);
            }
            if(ans.size() == k)return ans;
        }
        return ans;
    }
};