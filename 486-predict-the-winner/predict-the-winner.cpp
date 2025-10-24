class Solution {
public:
    bool solve(vector<int>& nums, int scorea, int scoreb , int i, int j ,  bool turn){
        if(i > j){
            return scorea >= scoreb;
        }
        // if(n <= 2)return true;

        if(turn){
            //picking up from the start & end of the list for a
            bool scoreofA =   solve(nums , scorea +nums[i] , scoreb , i+1 , j, false);
            bool scoreofA2 =  solve(nums , scorea+ nums[j] , scoreb  , i, j-1 , false);
            return scoreofA || scoreofA2;
        }else{
            //picking up from the start & end of the list for b 
            bool scoreofB =  solve(nums , scorea  , scoreb + nums[i] , i+1 , j , true);
            bool scoreofB2 = solve(nums , scorea  , scoreb + nums[j] , i , j-1 , true);
            return scoreofB && scoreofB2;
        }
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(nums, 0 , 0 , 0 , nums.size() -1 , true);
    }
};