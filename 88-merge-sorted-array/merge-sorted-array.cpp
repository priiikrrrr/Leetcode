class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m + n - 1;//1st array
        int j = n - 1;//2nd array
        int k = m - 1;//1st array

        while(k >= 0 && j >= 0){
            if(nums1[k] < nums2[j]){
                nums1[i--] = nums2[j--];
            }
            else{
                //arr[k] > arr[j]
                nums1[i--] = nums1[k--];
            }
        }
        while(j >= 0){
            nums1[i--] = nums2[j--];
        }
    }
};