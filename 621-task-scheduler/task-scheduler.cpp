class Solution {
public:
// TC : O(N) + O(Log(size)) // size = 26:max(constant) hence TC = O(n)
//SC : mp & pq both are of constant size hence O(1);
    int leastInterval(vector<char>& tasks, int n) {
        //mapping the frequencies 
        vector<int>mp(26,0);
        for(auto &i : tasks)mp[i - 'A']++;
        //storing the frequencies in priority queue using max heap : because the idea is to pick the most frequently occuring element first(sort of greedy app)
        priority_queue<int>pq;
        for(int i = 0 ; i < 26 ; i++){
            if(mp[i] > 0)pq.push(mp[i]);
        }
        int interval = 0;

        while(!pq.empty()){
            //making a temporary vector to store the reduced freq
            vector<int>temp;
            for(int i = 1 ; i <= n+1 ; i++){//tasks that can be done ek bar mein is n+1
                if(!pq.empty()){
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }
            for(int &i : temp){
                //if updated freq is still greater than 0 ; push it back again in priority q
                if(i > 0)pq.push(i);
            }
            if(pq.empty())interval += temp.size();
            else interval += n+1;
        }
        return interval;
    }
};