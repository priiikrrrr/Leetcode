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