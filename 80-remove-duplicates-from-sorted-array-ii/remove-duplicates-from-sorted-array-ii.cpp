class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int &j : nums){
            if(i < 2){
                nums[i] = j;
                i++;
            }else{
                //i >= 2
                if(j != nums[i-2]){
                    nums[i] = j;
                    i++;
                }
            }
        }
        return i;
    }
};