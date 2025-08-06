class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        // int n = nums.size(); -> resulted in RTE
        long long n = nums.size() ;
// if we see the expression n*(n - 1)/2
// How computer calculate this:
// first brackets will be solved that return an integer and will go for multiplying the n with that integer that's result must be long long type if n value is high:
// i.e. -> n <---- (n - 1)
// the value of multiplication will be stored in n that is integer type so, compiler gives you datatype overflow, so you have to change the data type of n variable to long long
        unordered_map<long long,long long>mp;
        long long gp = 0;
        // int count = 0;
        for(int i = 0 ; i < n ; i++){
            long long diff = i - nums[i];//re arranging eq gave us this ; calci
            gp = gp + mp[diff]++;//counting pairs with same differnce and increasing their freq and to not overwrite the prev good pair count add em as welll
        }
        long long totalP = n*(n-1)/2;
        //commbinatrics : for any given number with a freq "n". There can be C(n,2) combinations.
        // for(auto x : mp){
        //     if()
        // }
        long long Bp = totalP - gp;
        return Bp;
    }
};