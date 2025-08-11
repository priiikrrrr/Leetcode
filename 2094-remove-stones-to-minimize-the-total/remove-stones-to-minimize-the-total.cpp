class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        // for(int i : piles) sum += i;
        int sum = 0;
        for(int i = 0 ; i < piles.size() ; i++){
            pq.push(piles[i]);
            sum += piles[i];
        }
        // for (int i : piles)pq.push(i);
        for (int i = 0; i < k; i++) {
            int start = pq.top();
            pq.pop();
            int removele = floor(start / 2);
            sum -= removele; 
            start -= removele;
            pq.push(start);
                // int newstart = start - removele;
                // pq.push(newstart);
                // tempsum = (start + removele + newstart) - removele;
        }
        return sum;
    }
};