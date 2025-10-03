class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(), nums.end());
        int ans = 0;
        for(int i = 0 ; i < k ; i++){
            ans += start;
            start++;
        }
        return ans;
    }
};