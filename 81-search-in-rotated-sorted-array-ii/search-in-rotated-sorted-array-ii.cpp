class Solution {
public:
    bool search(vector<int>& nums, int target) {
        if (nums.size() == 2) {
            if (target == nums[0])
                return true;
            else if (target == nums[1])
                return true;
            else
                return false;
        }
        int bp = - 1; 
        for(int i = 0 ; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]) bp = i + 1;
        }
        if(bp == -1)bp = 0;
        int low = bp;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target)return true;
            else if(nums[mid] > target)high = mid - 1;
            else low = mid + 1;
        }
        low = 0 ; 
        high = bp;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target)return true;
            else if(nums[mid] > target)high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};