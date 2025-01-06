class Solution {
public:
    bool search(vector<int>& v, int target) {
        int low = 0;
        int high = v.size() -1;

        while(low <= high){
            int mid = low + (high - low)/2;
            if(v.at(mid) == target) return true;
            else if(v.at(low) == v.at(mid) && v.at(mid) == v.at(high)){
                low++;
                high--;
            }
            else if(v.at(low) <= v.at(mid)){
                if(v.at(low) <= target && target <= v.at(mid)) high = mid - 1;
                else low = mid + 1;
            }
            else{
                if(v.at(mid) <= target && target <= v.at(high)) low = mid + 1;
                else high = mid - 1;
            }
        }
        return false;
    }
};