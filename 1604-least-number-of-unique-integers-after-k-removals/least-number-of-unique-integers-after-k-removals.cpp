class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        priority_queue<int, vector<int>, greater<int>>q;//min heap
        unordered_map<int,int>mp;
        //storing the freq of the numbers given in the array (hint use)
        for (int num : arr) mp[num]++;
        //storing the freq of the numbers itself in the minheap so we dont have to go thru each ele in the heap, 
        //simply looking at the freq will give us the indication of how many uniq ele there might be present 
        for(auto &i : mp)q.push(i.second);
        //while heap aint empty && the number of ele to be removed(k) >= the freq of the ele at the top of heap we keep removing ele(hint use)
        while(!q.empty() && k >= q.top()){
            k = k - q.top();//since q stores occurences not, numbers
            q.pop();
        }
        return q.size();
    }
};