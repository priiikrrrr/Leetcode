class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n = s.length();
        long  long ans = LLONG_MAX;//to store the minimum ans 
        long long total = 0;
        long long max = 0;
        vector<long long>arr(26,0);
        for(int i = 0 ; i < n ; i++){
            total += cost[i];
            arr[s[i] - 'a'] += cost[i];
        }
        for(int i = 0 ; i < arr.size() ; i++){
            if(arr[i] == 0)continue;
            max = total - arr[i];
            ans = min(ans , max);
        }
        return ans;
    }
};