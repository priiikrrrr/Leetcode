class Solution {
public:
//brute force 
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        vector<int>v;
        int numOfZee = 0;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0) v.push_back(arr[i]);
            else numOfZee++;
        }
        for(int i = 1; i <= numOfZee ; i++){
            v.push_back(0);
        }
        for(int i = 0 ; i < n ; i++){
            arr[i] = v[i];
        }
     }
};