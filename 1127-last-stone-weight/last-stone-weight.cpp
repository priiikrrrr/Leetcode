class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;//max-heap
        for(int i : stones)pq.push(i);

        while(pq.size() > 1){
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if(x != y){
                y = x - y;
                pq.push(y);
            }
        }
        if(!pq.empty())return pq.top();
        else return 0;
    }
};