class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return true;

        int invCount = 0;
        for(int i = 1 ; i < n ; i++){
            if(nums[i] < nums[i-1]){
                ++invCount;
                if(invCount > 1) return false;
            }
        }
        if(nums[0] < nums[n -1])++invCount;

        if(invCount <= 1)return true;
        else return false;
    }
};