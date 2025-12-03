class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int>frq;
        for(auto i : nums)frq[i]++;
        int ans = 0;
        for(auto ele : frq){
            int num = ele.first;
            int freq = ele.second;
            if(freq > 1){
                ans = num;
                break;
            }else{
                continue;
            }
        }
        return ans;
    }
};