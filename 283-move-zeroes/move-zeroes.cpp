class Solution {
public:
    // brute force
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int i = 0; // iterate on zeros
        int j = 0; // iterate on non zeros

        while (i < n && j < n) { //out of bound condition
            if (arr[i] == 0 && arr[j] != 0){
                if(j >i) swap(arr[i],arr[j]);
                else j++;
            }
            else if (arr[i] != 0) i++;
            else if (arr[j] == 0) j++;
        }
    }
};