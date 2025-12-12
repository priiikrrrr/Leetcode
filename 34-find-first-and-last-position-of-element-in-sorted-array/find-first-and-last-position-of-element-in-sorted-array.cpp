class Solution {
public:
    int leftfind(vector<int>&nums, int target , int n){
        int l = 0;
        int h = n - 1;
        int left = -1;
        while(l <= h){
            int mid = l +( (h - l) >> 1);
            if(nums[mid] == target){
                left = mid;
                h = mid - 1;
            }
            else if(nums[mid] < target)  l = mid + 1;
            else h = mid - 1;
        }
        return left;
    }
    int rightfind(vector<int>&nums, int target , int n){
        int l = 0;
        int h = n - 1;
        int right = -1;
        while(l <= h){
            int mid = l + ((h - l) >> 1);
            if(nums[mid] == target){
                right = mid;
                l = mid + 1;
            }
            else if(nums[mid] < target) l = mid + 1;
            else h = mid - 1;
        }
        return right;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int leftO = leftfind(nums, target, n);
        int rightO = rightfind(nums, target, n);
        return {leftO, rightO};
    }
};