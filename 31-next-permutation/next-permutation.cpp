class Solution {
public:
    void reversee(vector<int>& nums,int i , int j){
        while(i < j ){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        return;
    }
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            //finding pivot
            if(nums.at(i) < nums.at(i+1)){
                idx = i; 
                break;
            }
        }
        if(idx == -1){ //if no next permutation
            //in built -> reverse(nums.begin(), nums.end());
            reversee(nums, 0 , nums.size() -1);
            return;
        }
        //sorting/reverse elements after pivot
        //to reverse i to j --> use reverse(nums.begin() + i, nums.begin() + j + 1)
        reverse(nums.begin() + (idx + 1), nums.end());
        //used nums.end() here because we have to reverse till the end of vector
        //find element just greater than pivot 
        int j = -1;
        for(int i = idx+1 ; i <nums.size() ; i++){
            if(nums[i] > nums[idx]){
                j = i;
                break;
            }
        }
        //swap idx and j
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
    }
};