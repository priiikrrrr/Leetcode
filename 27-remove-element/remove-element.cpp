class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0; 
        int j = nums.size() - 1; 
        while(i <= j){
            if(nums[i] != val)i++;
            else{
                //nums[i] == value
                if(nums[j] == val)j--;
                else{
                    //nums[j] != value
                    swap(nums[i] , nums[j]);
                    i++;
                }
            }
        }
        return (j+1);
    }
};