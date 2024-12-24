class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            bool flag = false ; 
            for(int j = 0 ; j < n ; j++){
                if(j == i) continue;
                if(nums[i] == nums[j]){
                    flag = true;
                    break;
                }
            }
            if(flag == false) return nums[i];
        }
        return 0;
    }
};