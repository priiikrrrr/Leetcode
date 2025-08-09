class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int, vector<int>,greater<int>>q;
        int s = heights.size();
        //sol reference DYA
        int count = 0;
        for(int i = 0 ; i < s - 1 ; i++){
            int diff = heights[i+1] - heights[i];
            if(diff > 0){
                if(q.size()  < ladders)q.push(diff);
                else{
                    if(q.empty() || q.top() >= diff)bricks -= diff;
                    else {
                        int upm = q.top();
                        q.pop();
                        q.push(diff);
                        bricks -= upm;
                    }
                    if(bricks < 0) return i;
                }
            }
        }
        return s - 1;
    }
};