class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int i = nums[nums.length() - 1];
        // int j = nums[nums.length() - 2];

        // int j = -1;
        int bp = -1;
        // finding the break point
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
        }
        // if no breakpoint, simply aesc the order
        if (bp == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // if bp found, sort the ele left, on the left of bp
        reverse(nums.begin() + (bp + 1), nums.end());
        
        // Find the smallest element greater than nums[bp] from the end & swap
        for (int i = bp + 1; i < nums.size(); i++) {
            if (nums[i] > nums[bp]) {
                swap(nums[bp], nums[i]);
                break;
            }
        }
    }
};