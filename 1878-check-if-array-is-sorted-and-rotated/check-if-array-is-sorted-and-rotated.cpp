class Solution {
public:
    bool check(vector<int>& nums) {
        //sliding window approach
        int n = nums.size();
        if(n <= 1)return true;
        int c  = 1 ;
        for(int i = 1 ; i < 2*n ; i++){
            if(nums[(i - 1) % n] <= nums[i % n])c++;
            else c = 1;
            if(c == n)return true;
        }
        return false;
    }
};