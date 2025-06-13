class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        if(nums.size()== 1 || nums.empty()) return nums;
        vector<int>ans;
        vector<int>pos,neg;
        for(int num: nums){
            if(num >= 0) pos.push_back(num);
            else neg.push_back(num);
            }
        int i = 0; 
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i]);
            i++;
            ans.push_back(neg[j]);
            j++;
        }
        return ans;
    }
};

//to think :: 
/*
what is needed - separation of arrays 
what to repeat - alternate num 
edge cases - empty arr, size 1, odd num (counter to this ques), 2 neg , 1 pos(or vice versa)(counter to the q)
since the ques said equal num of neg and pos hence last two edge cases are nullified
*/