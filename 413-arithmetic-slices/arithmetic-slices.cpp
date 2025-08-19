class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size() <= 2)return 0;
        int subCount = 0;
        int total = 0;
        int diff1 = 0; 
        int diff2 = 0;
        for(int t = 0 ; t < nums.size()-2 ; t++){
            diff1 = nums[t+1] - nums[t];
            diff2 = nums[t+2] - nums[t+1];
            if(diff1 == diff2){
                subCount++;
                total += subCount;
            }
            else{

                // total += subCount * (subCount + 1)/2;
                subCount = 0;
            }
        }
        return total;
    }
};