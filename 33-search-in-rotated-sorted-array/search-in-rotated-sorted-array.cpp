class Solution {
public:
//observation  : the left half is not sorted & the right half is sorted since rotating array : will move the ele towards the beginning making the left side of the array unsorted yet the non rotated part i.e the right part is still sorted 
    int search(vector<int>& nums, int target) {
        if (nums.size() == 2) {
            if (target == nums[0])
                return 0;
            else if (target == nums[1])
                return 1;
            else return -1;
        }
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            //if found, stop
            if(nums[mid] == target)return mid;
            //identify the sorted half , is it the left half or the right half
            //the lower value shall be smaller than the mid 
            //there by we can say that the right half is sorted 
            if(nums[low] <= nums[mid]){
                //if left sorted
                if(nums[low] <= target && target <= nums[mid]){
                    //if true the target lies within this
                    //we can remove the right half 
                    high = mid - 1;
                }else{
                    //remove the left half
                    low = mid + 1;
                }
            }else{
                //if right half is sorted 
                if(nums[mid] <= target && target <= nums[high]){
                    //if true the target within this range
                    //we can remove the left half
                    low = mid + 1;
                }else{
                    //remove the right
                    high = mid- 1;
                }
            }
        }
        return -1;
    }
};
