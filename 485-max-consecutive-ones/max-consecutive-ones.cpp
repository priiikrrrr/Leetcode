class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int repeatNumCount = 0;
        int maxRepeatNumCount = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            repeatNumCount++;
            maxRepeatNumCount = max(maxRepeatNumCount, repeatNumCount);
        } else {
            repeatNumCount = 0;
        }
    }
    return maxRepeatNumCount;
    }
};