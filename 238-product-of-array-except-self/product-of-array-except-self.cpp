class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int prodWoZero = 1;
        int zeeCount = 0;
        for(int i : nums){
            if(i == 0){
                zeeCount++;
            }else{
                prodWoZero *= i;
            }
        }
        if(zeeCount > 1)return vector<int>(nums.size(), 0);

        vector<int>result(nums.size());

        for(int i = 0 ; i < n ; i++){
            int nbr = nums[i];
            if(nbr != 0){
                if(zeeCount > 0)result[i] = 0;
                else{
                    result[i] = prodWoZero/nums[i];
                }
            }else{
                //digit we are at is 0 
                if(zeeCount > 1)result[i] = 0;
                else result[i] = prodWoZero;
            }
        }
        return result;
    }
};