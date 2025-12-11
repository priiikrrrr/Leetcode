class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.size()== 1 || nums.empty()) return nums;
        vector<int>pos;
        vector<int>neg;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] >= 0)pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
        vector<int>res;
        int i = 0 ; 
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            res.push_back(pos[i]);
            i++;
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};