class Solution {
public:
    void sortColors(vector<int>& nums) {
        // one pass -> dutch algo 
        int low = 0; 
        int mid = 0;
        int high = nums.size()-1;
        //hamesha mid k baare me socho 
        //0 to low - 1 -> 0th element 
        // high+ 1 to end -> 2nd element 
        //low to mid -1 -> 1st element 
        while(mid <= high){
            if(nums.at(mid) == 2){
                int temp = nums.at(mid);
                nums.at(mid) = nums.at(high);
                nums.at(high) = temp;
                high--; 
            }
            else if(nums.at(mid) == 0){
                int temp = nums.at(mid);
                nums.at(mid) = nums.at(low);
                nums.at(low) = temp;
                low++;
                mid++; 
            }
            else //(nums.at(mid) == 1){
                mid++;
        }
    }
};