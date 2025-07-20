class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(), deck.end());
/*
leave a space before filling an ele in the final array from the sorted one 
such that, after filling the full array on alternate positions there, must be 
ele still left in the original array to fit them in the alternate position
again use the same idea of filling the leftover elements in the alternate order only
*/
        vector<int>ans(n);
        queue<int>q;
        for(int i = 0 ; i < n ; i++){
            q.push(i);
        }
        for(int i = 0 ; i < n ; i++){
            int idx = q.front();
            q.pop();
            q.push(q.front());/**/
            q.pop();/**/
            ans[idx] = deck[i];
        }
        return ans;
    }
};