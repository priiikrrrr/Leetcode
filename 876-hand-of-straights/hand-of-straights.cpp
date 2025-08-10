class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
        if (nums.size() % k != 0) return false;
        map<int, int> mp; // ordered map for smallest->largest access
        
        for (int i : nums)mp[i]++;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            int i = it->first;  //key : number
            int j = it->second; //freq of number
            if (j > 0) {        //when freq > 0
                for (int t = 0; t < k; t++) {
                    int key = i + t;
                    if (mp[key] < j) return false;
                    mp[key] -= j;
                }
            }
        }
        return true;
    }
};