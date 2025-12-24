class Solution {
public:
    int findMin(vector<int>& nums) {
        int bp = -1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1])
                bp = i;
        }
        if (bp == -1)
            bp = 0;
        int low = bp + 1;
        int high = nums.size() - 1;
        int minele = INT_MAX;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < minele) {
                minele = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        low = 0;
        high = bp + 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < minele) {
                minele = nums[mid];
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return minele;
    }
};