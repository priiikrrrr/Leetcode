class Solution {
public:
    void sortColors(vector<int>& nums) {
        int num0 = 0;
        int num1 = 0;
        int num2 = 0;

        for(int i = 0; i < nums.size() ; i++){
            if(nums.at(i)== 0) num0++;
            else if(nums.at(i)== 1) num1++;
            else num2++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if( i < num0) nums.at(i) = 0 ;
            else if(i < (num0+num1)) nums.at(i) = 1;
            else nums.at(i) = 2;
        }
        return;
    }
};