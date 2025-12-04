class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer;
        sort(nums.begin(), nums.end());
        if(nums.size() < 3)return {{}};
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            if(i > 0 && nums[i] == nums[i-1])continue; //to avoid duplicacy of i
            int j = i+1;
            int k = nums.size() - 1;

            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0){
                  k--;  
                }else if(sum < 0){
                    j++;
                }else{
                    // i + j + k == 0
                    answer.push_back({nums[i], nums[j], nums[k]});
                    while(j < k && nums[j] == nums[j+1])j++;
                    while(j < k && nums[k] == nums[k-1])k--;
                    j++;
                    k--;
                }
            }
        }
        return answer;
    }
};