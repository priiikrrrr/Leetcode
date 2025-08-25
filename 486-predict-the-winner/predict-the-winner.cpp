class Solution {
public:
//     bool score(vector<int>& nums, int lastVal){
//         // int count = 0;
//         // if(nums.size() == 0 || nums[nums.size() - 1] > lastVal)count += nums[nums.size() -1];
//         // int count1 = 0;
//         // int val = [nums.size() - 1];
//         // nums.pop_back();
//         // score(nums, lastVal);
//         // count1 += count1;

//         // if(count > count1)return true;
//         // else return false;
//         if(i > j)return 0;
//         return total - min(winnerScore(nums, total - nums[i], i+1, j), winnerScore())
//     }
//     bool predictTheWinner(vector<int>& nums) {
//         if(nums.size() <= 1)return true;
//         // int lastVal = nums[nums.size() - 1];
//         // int total = 0;
//         // total += lastVal;
//         // nums.pop_back();
//         // predictTheWinner(nums);
//         // score(nums, lastVal, total); 
//         int total = 0;
//         for(auto i : nums)total += i;
//         return score(winnerScore(nums, total, 0 , nums.size() - 1), total);
// if(i > j)return winner(nums, i , j);
    bool score(vector<int>& nums, int i , int j , int scoreA, int scoreB, bool Current_turn){
        if(i > j){
            if(scoreA >= scoreB)return true;
            else return false;
        }
        if(Current_turn)
            return score(nums, i+1 , j , scoreA + nums[i] , scoreB , false) || score(nums, i , j-1 , scoreA + nums[j] , scoreB , false);
            return score(nums, i+1 , j , scoreA  , scoreB + nums[i], true) && score(nums, i , j-1 , scoreA , scoreB+ nums[j] , true);

    }
    bool predictTheWinner(vector<int>& nums) {
        // int scoreA = 0;
        // int scoreB = 0;
        return score(nums, 0 , nums.size() - 1, 0 , 0, true);
    }
};