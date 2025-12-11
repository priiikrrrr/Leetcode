class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        
        int m = nums1.size();
        int n = nums2.size();

        unordered_map<int,int>mp;
        vector<vector<int>>ans;

        //extracting the values and storing in the map
        for(int i = 0 ; i < m ; i++){
            int id = nums1[i][0];
            int value = nums1[i][1];

            mp[id] += value;
        }

        for(int i = 0 ; i < n ; i++){
            int id = nums2[i][0];
            int value = nums2[i][1];

            mp[id] += value;
        }

        for(auto &it : mp){
            int key = it.first;
            int val = it.second;

            ans.push_back({key,val});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};