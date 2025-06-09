class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        if(nums.empty()) return 0;
        int n = nums.size();
        int k = 1;
        for(int i = 1 ; i < n ; i++){
            //starting from 1st index as 1st ele (0th index) will always be unique
            if(nums[i] != nums[k-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};