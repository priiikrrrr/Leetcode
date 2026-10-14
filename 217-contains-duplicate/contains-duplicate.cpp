class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>dupeInSet;
        for(auto i : nums){
            if(dupeInSet.count(i))return true;
            else{
                dupeInSet.insert(i);
            }
        }
        return false;
    }
};