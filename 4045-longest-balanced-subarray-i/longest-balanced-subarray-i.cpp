//edges are - 
    //same ele 
    //odd == even in distinct ele 
    //contiguous arr only

class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        if(nums.size() <= 1)return nums.size();
        // if(nums.size() > 1) int j = ;
        int ans = 0;

        for(i = 0 ; i < n ; i++){
            unordered_set<int>even;
            unordered_set<int>odd;
                for(int j = i ; j < n ; j++){
                    if(nums[j] % 2 == 0)even.insert(nums[j]);
                    else odd.insert(nums[j]);

                    if(even.size() == odd.size())ans = max(ans, j - i + 1);
                }
        }
        return ans;
    }
};