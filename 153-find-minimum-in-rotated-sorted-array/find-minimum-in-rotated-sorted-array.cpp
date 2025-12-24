class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= nums[low]){
                //left half is sorted
                //compare the ans and pick the mini from low and ans
                ans = min(ans , nums[low]);
                low = mid + 1;
            }else{
                //if left half is unsorted , the right half must be sorted
                //there we may pick the smallest ele from the sorted version
                //which is from mid to high part , and there lowest will be nums[mid]
                ans = min(ans , nums[mid]);
                high =  mid - 1; 
            }
        }
        return ans;
    }
};