class Solution {
public:
    int maximumCount(vector<int>& nums) {
        //using BS
        int pos = 0;
        int neg = 0;
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        //calc largest positive
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] <= 0) low = mid + 1;
            else{
                if(mid > 0 && nums[mid - 1] > 0){
                    high = mid - 1;
                }
                else{
                    pos = n - mid;
                    break;
                }
            }
        }
        //calc largest negative
        low = 0;
        high = n - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] >= 0) high = mid - 1;
            else{
                if(mid < n - 1 && nums[mid+1] < 0) low = mid + 1;
                else{
                    neg = mid + 1;
                    break;
                } 
            }
        }
        return max(pos,neg);
    }
};