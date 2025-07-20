class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k == 1) return nums;
        int n = nums.size();
        deque<int>dq;//dec order of ele. (we are pushing idex)
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            while(dq.size() > 0 && nums[i] > nums[dq.back()])dq.pop_back();
            dq.push_back(i);
            int j = i - k + 1;//start of the window youre at; //imp
            while(dq.front() < j)dq.pop_front();//imp
            if(i >= (k - 1))v.push_back(nums[dq.front()]);
        }
        return v;
    }
};