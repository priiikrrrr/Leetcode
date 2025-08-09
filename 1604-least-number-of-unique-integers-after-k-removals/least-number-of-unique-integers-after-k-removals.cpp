class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>>q;//min heap
        unordered_map<int,int>mp;
        for (int num : arr) mp[num]++;
        for(auto &i : mp)q.push(i.second);
        //storing the ele and their frequencies in map 
        while(!q.empty() && k >= q.top()){
            k = k - q.top();//since q stores occurences not, numbers
            q.pop();
        }
        return q.size();
    }
};