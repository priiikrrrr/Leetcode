class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        for(int i = n - 1; i > 0 ; i--){
            if(nums[i] > nums[i - 1]){
                idx = i - 1;
                break;
            }
        }
        if(idx != -1){
        int justbiggIdx = idx;
            //find just greater index from the idx which satisfies the condition to the right of the it ;(i.e end se lekr idix tak mein jo bhi just greater ele hoga than the ele at idx we will flag that)
            for(int i = n - 1; i >= idx + 1 ; i--){
                if(nums[i] > nums[idx]){
                    justbiggIdx = i;
                    break;
                }
            }
        swap(nums[idx], nums[justbiggIdx]);
        }
        //if the condition satisfies then reverse the rest of the ele from the justbiggidx till the end 
        //if it doesnt satisfies the condition it means its already at its req pos simply rev all the ele to get the very next permutation
        reverse(nums.begin() + idx + 1 , nums.end());
    }
};