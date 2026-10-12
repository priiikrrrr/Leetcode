class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        //create a vector or manipulate the same vector 
        int n = nums.size();
        vector<int>arr(2*n);
        for(int i = 0 ; i < n ; i++){
            arr[i] = nums[i];
            arr[i+n] = nums[i];
        }
        return arr;

        //for the index youre at , add the same ele to that index of new arr 
        //for the index + length's index value , also store the same val 
    }
};