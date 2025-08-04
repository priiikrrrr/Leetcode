class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& arr) {
        int n = arr.size();
        int count = 0;
        unordered_set<string>s;
        for(int i = 0 ; i < n ; i++){ //O(n)
        //Set mein ele dalo
            s.insert(arr[i]);
        //array ke ele ko reverse karo ; taaki jo ele same hain , wo same dikh jaye on 
        //traversal hence helping with comparision in set for unique ele
            string rev = arr[i];
            reverse(rev.begin(), rev.end());
        //after reversal comparision
            if(arr[i] == rev)continue;
            if(s.find(rev) != s.end()){ //O(1)
                count++;
                s.erase(arr[i]);
            }
        }
        return count;
    }
}; 