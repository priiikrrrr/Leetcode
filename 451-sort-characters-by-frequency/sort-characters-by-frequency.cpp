struct customcomp{ //overloading max heap for freq, based seggregation
    bool operator()(pair<char,int> &a, pair<char,int> &b) {
        return a.second < b.second; 
    }    
};

class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<char,int>, vector<pair<char,int>>, customcomp> pq;//max heap
        unordered_map<char, int>mps;
        for(char i : s)mps[i]++;
        for(auto &i : mps)pq.push({i.first, i.second});
        string temp = "";
        while(!pq.empty()){
            // temp.push_back(pq.top().first);
            // pq.pop();
            char ch = pq.top().first;
            int chfreq = pq.top().second;
            temp.append(chfreq, ch);// jitni freq hai ek char ki utne times , us character ko append krdo
            pq.pop(); 
        }
        return temp;
    }
};