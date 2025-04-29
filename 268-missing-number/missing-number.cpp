class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //cyclic sort like approach    
        int n = nums.size();
        int i = 0;
        while(i<n){
            int correctIdx = nums[i];
            if(correctIdx == i || nums[i] == n)i++;
            else swap(nums[i], nums[correctIdx]);
        }
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != i) return i;
        }
        return n;
    }
};

//TC O(n)
//more optimal way?  =>  do sum of 0 to n ; do sum of given array's ele 
//Then subtract both of em - you'll find the missing ele 