class Solution {
public:
    vector<int>dp;//globally declaring so we dont need to pollute the dp in each function call 
    int solve(vector<int>&nums, int i){
        int n = nums.size();
        if(i == n-1)return nums[n-1]; //single house
        if(i > n)return 0;//out of bound
        if(i == n-2)return max(nums[n-2], nums[n-1]);//only two house present

        return max((nums[i] + solve(nums, i+2)), 0 + solve(nums, i+1));
    }

    int solveViaTD(vector<int>&nums, int i){
        int n = nums.size();
        if(i == n-1)return nums[n-1];
        if(i > n)return 0;
        if(i == n-2)return max(nums[n-2], nums[n-1]);

        if(dp[i] != -1)return dp[i];//already computed value
        return dp[i] = max((nums[i] + solveViaTD(nums, i+2)), 0 + solveViaTD(nums, i+1));
    }

    int solveViaBU(vector<int>&nums){
        int n = nums.size();
        if(n == 1)return nums[0];
        dp.clear();
        dp.resize(n);

        dp[n-1] = nums[n-1];
        dp[n-2] = max(nums[n-2], nums[n-1]);

        for(int i = n - 3 ; i >= 0 ; i--){
            dp[i] = max(nums[i] + dp[i+2],0+ dp[i+1]);
        }
        return dp[0];
    }

    int rob(vector<int>& nums) {
        dp.clear();//garbage value if any
        dp.resize(105, -1);//resizing dp via looking at constraints doing so, will help us less thinking of ki size - 1 lein ya size/2 lein, jitna constraint given h uske aas paas ka number lelo , if n wouldve been 10^3 i would ve took 10^3 + 5 as the size of dp 
        return solveViaTD(nums, 0);
    }
};