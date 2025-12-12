class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        
        // Calculate the total number of subsets (2^n) using bitwise shift
        int subsets = 1 << n;
        vector<vector<int>>ans;
        //  Iterate through all numbers from 0 to 2^n - 1
        for(int num = 0 ; num < subsets ; num++){
            vector<int>res;
            // Iterate through each bit of the number
            for(int i = 0 ; i < n ; i++){
                //check if ith bit is set or not, if set , push back that num[i]
                if(num & ( 1 << i ))res.push_back(nums[i]);
            }
        ans.push_back(res);
        }
        return ans;
    }
};