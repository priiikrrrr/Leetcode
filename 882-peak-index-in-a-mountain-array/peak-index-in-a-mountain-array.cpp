class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int n = v.size();
        // if(n > 3) return 1;
        int low = 1; 
        int high = n-2;
        int idx = -1;

        while(low <= high){
            int mid = low + ((high - low)/2);

            if((v.at(mid) > v.at(mid-1)) && (v.at(mid) > v.at(mid+1))) {
                idx = mid;
                break;
            }
            else if(v.at(mid) > v.at(mid+1)) high = mid - 1; //dec array
            else low = mid + 1;
            // ((v.at(mid) > v.at(mid-1)) && (v.at(mid) < v.at(mid+1)))  //Inc array
        }
        return idx;

        /*
        for(int i = 1 ; i <= n - 2 ; i++){
            if((v.at(mid) > v.at(mid-1)) && (v.at(mid) > v.at(mid+1))) {
                idx = mid;
                break;
            }
        }
        */

    }
};