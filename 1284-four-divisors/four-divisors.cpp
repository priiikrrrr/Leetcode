class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int numsOfDiv = 0;
            int temp = 0;
            for (int j = 1; j * j <= nums[i]; j++){
                if(nums[i] % j == 0){
                    if(j == nums[i]/j){
                        //if the pair is of same number 
                        numsOfDiv++;
                        temp += j;
                    }else{
                        //if the pair is of diff number 
                        numsOfDiv += 2;
                        temp += j;
                        temp += nums[i]/j;
                    }
                     if (numsOfDiv > 4) {
                        temp = 0; 
                        break;
                    }
                }
            }
            if(numsOfDiv == 4)sum+= temp;
        }
        return sum;
    }
};






















        // for(int i = 1 ; i*i <= nums[n] ; i++){
        //     if(numOfDiv != 4 && nums[n] % i == 0){
        //         if(i == n/i){
        //             numOfDiv++;
        //             sum += i;
        //         }
        //         else{
        //             numOfDiv += 2;
        //             sum += i;
        //         }
        //     }
        //     n++;
        // }