class Solution {
public:
    long long rev(int x){
        long long newNum = 0;
        while(x){
        long long lastDigit = x % 10; 
        newNum = newNum*10 + lastDigit;
        x = x/10;
        }
        return newNum;
    }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        long long count  = 0 ;
        const int MOD = 1e9 + 7;
        unordered_map<long long,long long>mp;
        for(long long x : nums){
            long long difference = x - rev(x);
            count = (count+  mp[difference])%MOD;
            mp[difference]++;
        }
        return count;
    }
};