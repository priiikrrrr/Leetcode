class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        long long prod = 1;
        long long maxProd = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            prod *= nums[i];
            maxProd = max(prod, maxProd);
            if(prod== 0) prod = 1;
            // if((nums[i]*nums[i+1]) > maxProd) maxProd = (nums[i]*nums[i+1]);
            // if(maxProd > prod) prod = maxProd;
        }
        prod = 1;
        for(int i = nums.size() - 1; i >= 0 ; i--){
            prod *= nums[i];
            maxProd = max(prod, maxProd);
            if(prod == 0)prod = 1;
        }
        return maxProd;
    }
};

//brute forced O(N)Tc & o(1) Sc
//optimized -> use kandane's algo