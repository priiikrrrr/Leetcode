class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
       int maxx = -1; 
       for(int i = arr.size()-1; i >= 0 ; i--){
        int curr = arr[i];
        arr[i] = maxx;
        maxx =  max(maxx,curr);
       }
       return arr;
    }
};