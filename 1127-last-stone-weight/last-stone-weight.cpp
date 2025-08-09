class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        priority_queue<int>q;//max heap
        for(int i : arr) q.push(i);

        while(q.size() > 1){
            int x = q.top();
            q.pop();
            int y = q.top();
            q.pop();
            // if(x == y)q.pop();

            if(x != y){
                y = x - y;
                q.push(y); 
            }
        }
        // if(arr.size() == 0) return 0; rookie mistake
        if(q.empty())return 0;
        else return q.top();
    }
};



        //arr[i] = weight of stone 
        //arr = stones 
        // priority_queue<int,vector<int>,greater<int>>pq;//min heap