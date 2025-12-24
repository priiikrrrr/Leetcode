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
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] == target)return true;
            //if all three => low , mid , high are same we will shrink the search space  
            if(nums[low] == nums[mid] && nums[mid] == nums[high]){
                low = low+1;
                high = high-1;
                continue;
            }
            else if(nums[low] <= nums[mid]){
                //the left part is sorted
                //search the range of the left part 
                if(nums[low] <= target && target <= nums[mid]){
                    high = mid - 1;   
                }else{
                    low = mid + 1;
                }
            }else{
                //the right part is sorted
                //search the range of the right part
                if(nums[mid] <= target && target<= nums[high]){
                    low = mid + 1;
                }else{
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};