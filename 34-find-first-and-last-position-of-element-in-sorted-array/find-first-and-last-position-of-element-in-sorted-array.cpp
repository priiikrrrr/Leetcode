class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0)return {-1,-1};
        int low = 0;
        int high = nums.size() - 1;
        int firstocc = -1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                firstocc = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target)low = mid + 1;
            else high = mid - 1;
        }
        int lastocc = -1;
        low = 0;
        high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target){
                lastocc = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target)low = mid + 1;
            else high = mid - 1;
        }
        return {firstocc, lastocc};
    }
};