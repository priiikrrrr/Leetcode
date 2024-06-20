class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>temporary(nums.size());
        for(int i = 0 ; i < nums.size() ; ++i){
             temporary[(i+k)%nums.size()] = nums[i];
        }
            nums = temporary;
    }
};