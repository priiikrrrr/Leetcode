class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // if n is even -> n/2 times sey zyaada jo aara h wo nikaalna hai 

        //brute force use count variable -> O(n^2)
        //more optimised ->

        sort(nums.begin(), nums.end());
        return nums[(n/2)];
    }
};