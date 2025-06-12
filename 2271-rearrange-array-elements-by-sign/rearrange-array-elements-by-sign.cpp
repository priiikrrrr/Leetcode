class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        if (nums.empty() || nums.size() == 1) return nums;
        // if(n <= 1) return nums;
        // if(n == 2){
        //     if(nums[0] < 0 && nums[1] > 0){
        //         // swap(nums[0],nums[1]);
        //         ans.push_back(nums[1]);
        //         ans.push_back(nums[0]);
        //     }
        // }
        // int i = 0;
        // int j = 0;
        // if(n > 3){
        //     if(nums[i] > 0){
        //         ans.push_back(nums[i]);
        //         if(nums[i+ 1] > 0)j++;
        //         if(nums[j] > 0) j++;
        //         else{
        //             ans.push_back(nums[j]);
        //         }
        //         i++;
        //         ans.push_back(nums[i]);
        //     }
        //     else{
        //         //nums[i] < 0
        //         i++;
        //         if(nums[i] >0) ans.push_back(nums[i]);
        //     }
        // }
        // return ans;
        vector<int>pos,neg;
        for(int num: nums){
            if(num >= 0) pos.push_back(num);
            else neg.push_back(num);
        }
        int i = 0; 
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i]);
            i++;
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};