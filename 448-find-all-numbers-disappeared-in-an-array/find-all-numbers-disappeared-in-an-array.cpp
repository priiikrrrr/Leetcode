class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int>final;
        int i = 0;
        while(i < n){
            int indx = nums[i] - 1;
            if(nums[indx] == nums[i] || indx == i)i++;
            else swap(nums[i], nums[indx]);
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != i+1) final.push_back(i+1);
        }
        return final;
    }
};