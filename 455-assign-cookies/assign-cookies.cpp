class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end()); // 7 8 9 10
        sort(s.begin(),s.end()); // 5 6 7 8 

        int count = 0;
        int minimum = min(g.size(),s.size());
        // for(int i = 0 ; i < min(g.size(),s.size()) ; i++){
        //     if(s[i] >= g[i]) count++;
        // }
        //return count;
        int i = 0 ; 
        int j = 0 ;
        while(i < g.size() && j < s.size()){
            if(g[i] <= s[j]){
                count++;
                i++;
                j++;
            }else{
                j++;
            }
        }
        return count;

    }
};