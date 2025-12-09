class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sldwow = 0;
        int maxsldwow = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 1){
                maxsldwow++;
                sldwow = max(maxsldwow, sldwow);
            }else maxsldwow = 0;
        }
        return sldwow;
    }
};