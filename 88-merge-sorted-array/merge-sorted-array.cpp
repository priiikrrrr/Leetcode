class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n - 1;  //nums 1 ka end
        int j = n - 1;     //nums 2 ka end
        int k = m - 1;     // nums 1 ka logical end
        while(k >= 0 && j >= 0){
            if(nums1[k] < nums2[j]){
                nums1[i] = nums2[j];
                j--;
                i--;
            }
            else{
                nums1[i] = nums1[k];
                k--;
                i--;
            
            }
        }
        while(j >= 0){
            nums1[i] = nums2[j];
            j--;
            i--;
        }

    }
};