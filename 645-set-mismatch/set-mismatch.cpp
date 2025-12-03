class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        // vector<int> ans;
        // s.insert(nums[0]);
        unordered_set<int> s;
        int dupe = 0;
        int reqMiss = 0;
        long long sum = (1LL * n * (n + 1)) / 2;
        long long sumAct = 0;
        for (int num : nums) {
            sumAct += num;

            if (s.count(num)) {
                // if exists then s.count = 1 ; therefore dupe it is
                dupe = num;
            } else {
                // i.e s.count = 0
                s.insert(num);
            }
        }
        reqMiss = dupe + (sum - sumAct);
        return {dupe, reqMiss};
    }
};

/*

SIMULATION CODE : 
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        std::ranges::sort(nums);
        vector<int> res(2,0);
        for(int i=0;i<nums.size();i++){
            if(i==0){
                if(nums[0]!=1){
                    res[1] = 1;
                }
                continue;
            }
            if(nums[i]==nums[i-1]){
                res[0] = nums[i];
            }else if(nums[i]!=nums[i-1]+1){
                res[1] = nums[i-1]+1;
            }
        }
        if(res[1]==0) res[1] = nums.size();
        return res;
    }
}

*/