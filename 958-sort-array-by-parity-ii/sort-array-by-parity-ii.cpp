class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        if(nums.size() < 2)return nums;
        int i = 0 ; 
        int j = nums.size() - 1;
        while(i < nums.size() && j >= 0){
            if( nums[i]%2 == 0)i+=2;
            if( nums[j] % 2 != 0)j-=2;
            else swap(nums[i], nums[j]);
        }
        return nums;
    }
};