class Solution {
public:
    int reverse(int n){
        int revNum = 0; 
        while(n > 0){
            revNum *= 10;
            revNum += (n % 10);
            n /= 10;
        }
        return revNum; 
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);
        }
        unordered_set<int>s;
        for(int i = 0 ; i < nums.size() ; i++){
            s.insert(nums[i]);
        }
        return s.size();
    }
};