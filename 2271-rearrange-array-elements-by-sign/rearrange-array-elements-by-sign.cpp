class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos;
        vector<int>neg;
        vector<int>res;
        for(int number : nums){
            if(number < 0)neg.push_back(number);
            else pos.push_back(number);
        }
        int i = 0;
        int j = 0;
        while(i < pos.size() && j < neg.size()){
            res.push_back(pos[i]);
            i++;
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};