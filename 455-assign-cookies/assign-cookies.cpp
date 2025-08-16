class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());//nlogn
        sort(s.begin(), s.end());//mlogn
        int l = 0;
        int r = 0;
        int x = 0;
        while(l < g.size() && r < s.size()){//m
            if(s[r] >= g[l]){
                x++;
                l++;
                r++;
            }
            else r++;
        }
        return x;
    }
};