class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        for(int j = 1 ; j < nums.size() ; j++){
            if(nums[j] == nums[j-1] + 1)sum+= nums[j];
            else break;
        }
        set<int>st;
        for(int &i : nums)st.insert(i);
        //starting from sum , what is the number , that doesnt exist in the nums
        while(st.count(sum) == 1)sum++;
        return sum;
        // int op = 0;
        // for(auto k : st){
        //     if(k >= sum){
        //         sum = max(sum, k);
        //     }
        // }
        // return sum+1;
    }
};
        // int l  = 0;
        // int sum = 0;
        // if(is_sorted(nums.begin(), nums.end())){
        //     sum+= nums[l];
        //     l++; 
        // }