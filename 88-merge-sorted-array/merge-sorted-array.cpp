class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // if(nums1.size() != (m+n)) return;
        // if(nums1.empty() || nums2.empty())

        // // int i = 0;
        // int j = nums2[0];

        // for(int i = 0 ; i < nums1.size() ; i++){
        //     if(nums1[i] != 0)i++;
        //     else{
        //         nums1[i++] = nums2[j++];
        //         // j++;
        //     }
        // }
        // sort(nums1.begin(), nums1.end());

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while(i >= 0  && j >= 0){
            if(nums1[i] > nums2[j]){
                nums1[k--] = nums1[i--]; 
            }else{
                nums1[k--] = nums2[j--];
            }
        }
        while(j >=0){
            nums1[k--] = nums2[j--];
        }
    }
};