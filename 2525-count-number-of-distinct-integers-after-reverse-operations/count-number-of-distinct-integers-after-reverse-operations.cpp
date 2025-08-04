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
        unordered_set<int>s;
        for(int i = 0 ; i < n ; i++){
            int rev = reverse(nums[i]);
            s.insert(nums[i]);
            s.insert(rev);
            
        }
        // for(int i = 0 ; i < nums.size() ; i++){
        // }
        return s.size();
    }
};