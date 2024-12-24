class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v(n,0);
        int a = 1; 
        if(n%2 != 0)n--; // making odd array even : and since array already have 0 as elements, we are technically      just dec the size of array to be traversed and 1 element that we are dec is already assigned as 0 
        for(int i = 0 ; i < n ; i+=2){
            v[i] = a;
            v[i+1] = -a; 
            a++;
        }
        return v;
    }
};