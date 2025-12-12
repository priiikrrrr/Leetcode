class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int rleftnum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            rleftnum ^= nums[i];
        }
        return rleftnum;
    }
};