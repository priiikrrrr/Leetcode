class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for (int ele : arr)
            mp[ele]++;
        for (int i = 100; i <= 999; i+=2) {
                int x = i;
                int lastDOne = x % 10;
                x = x / 10;
                int lastDTwo = x % 10;
                x = x / 10;
                int lastDThree = x;
                if (mp.find(lastDOne) != mp.end()) {
                    mp[lastDOne]--;
                    if(mp[lastDOne] == 0)mp.erase(lastDOne);
                    if (mp.find(lastDTwo) != mp.end()) {
                        mp[lastDTwo]--;
                        if(mp[lastDTwo] == 0)mp.erase(lastDTwo);
                        if (mp.find(lastDThree) != mp.end()) {
                            ans.push_back(i);
                        }
                        mp[lastDTwo]++;
                    }
                    mp[lastDOne]++;
                }
        }
        return ans;
    }
};