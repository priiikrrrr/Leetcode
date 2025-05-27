class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int flips = 0;//flip = delete
        int i =0;
        int j = 0;
        int k = 1;
        int maxlen = INT_MIN;
        int len;
        while(j < n){
            if(nums[j] == 1)j++;
           else{
            //nums[j] == 0
            if(flips < k){
                flips++;
                j++;   
            }
            else{
                //flips == k
                //calculate length
                len = j-i;
                maxlen = max(maxlen, len);
                //i ko just ek index le jao , next 0 ke
                while(nums[i] == 1)i++;//after this nums[i] is = 0
                i++;
                j++;
            }
           }
        }
        len = j-i;
        maxlen = max(maxlen, len);
        return maxlen - 1;
    }
};
//O(n)