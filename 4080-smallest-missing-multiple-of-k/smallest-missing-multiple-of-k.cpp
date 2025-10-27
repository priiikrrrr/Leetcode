class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(), nums.end());
        int missing_ele = k;

        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i] % k == 0)continue;
        //     else missing_ele += k;
        // }
        for(auto i : nums){
            if(i == missing_ele)missing_ele += k;
            else if(i < missing_ele)continue;
            else if(i > missing_ele)return missing_ele;
        }
        return missing_ele;
    }
};