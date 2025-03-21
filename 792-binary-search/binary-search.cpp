class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0; 
        int high = n-1;

        while(low <= high){
            int mid = (low+high)/2; // better way to write it: low+(high-low)/2 : to optimise integer range
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) high = mid -1;
            else low = mid + 1;
        }
        return -1;
    }
};