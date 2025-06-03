class Solution {
public:
    vector<vector<int>>result;
    void f(vector<int>& cand, int target,int index, vector<int>&subset){
        // int orgTarget = target;
        if(target == 0){
            result.push_back(subset);
            return;
        }
        if(index == cand.size()) return;
        //pick 
        if(cand[index] <= target){
            subset.push_back(cand[index]);
            f(cand, target - cand[index], index, subset);
            subset.pop_back();
            // target = orgTarget;
        }
        //not pick
        int j = index + 1; //to avoid repeated sets, if the ele is same, we will skip making subset/combination from that ele
        // while(j < cand.size() and cand[j] == cand[j-1]) j++;
        f(cand,target,j,subset);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>subset;
        result.clear();
        f(candidates,target,0, subset);
        return result;
    }
};