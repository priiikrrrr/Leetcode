class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes;
        vector<int>&arr = customers;
        int n = arr.size();
        int prevloss = 0;
        for(int i = 0; i< k ;i++){
            if(grumpy[i]==1) prevloss += arr[i];
        }
        int maxloss = prevloss;
        int maxindex = 0;
        int i = 1;
        int j = k;
        while(j < n){
            int currloss = prevloss;
            if(grumpy[j] == 1)currloss += arr[j]; 
            if(grumpy[i-1] == 1)currloss -= arr[i-1]; 
            if(maxloss < currloss){
                maxloss = currloss;
                maxindex = i;
            }
            prevloss = currloss;
            i++;
            j++;
        }
        //filling zeros in grumpy arr
        for(int i = maxindex ; i < (maxindex + k) ;i++){
            grumpy[i] = 0;
        }
        //sum of satisfaction
        int sum = 0;
        for(int i = 0; i < n ; i++){
            if(grumpy[i] == 0) sum+= arr[i];
        }
        return sum;
    }
};