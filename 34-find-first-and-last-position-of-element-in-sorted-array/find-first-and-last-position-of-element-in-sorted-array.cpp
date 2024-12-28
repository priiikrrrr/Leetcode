class Solution {
public:
    vector<int> searchRange(vector<int>& v, int target) {
    vector<int>finalAns;
    int firstOccurence = -1;
    int n = v.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + ((high - low) / 2); // OR (low + high)/2

        if (v.at(mid) == target)
        {
            if(mid == 0 || v.at(mid-1) != target){
    
                firstOccurence = mid;
                break;
            }
            else{  //arr[mid-1] = x i.e now checking previous elements
                high = mid - 1;
            }
        }
        else if (v.at(mid) < target) low = mid + 1;
        else high = mid - 1;        
    }

    int lastoccurence = -1;
    low = 0;
    high = n - 1;
    while(low <= high){
        int mid = low + ((high - low) / 2);
        if(v.at(mid) == target){
            if(mid == n - 1 || v.at(mid+1) != target){
                lastoccurence = mid;
                break;
            }
            else{
                low = mid+1;
            }
        }
        else if(v.at(mid) < target) low = mid +1;
        else high = mid - 1;
    }
        finalAns.push_back(firstOccurence);
        finalAns.push_back(lastoccurence);

    return finalAns;
    
}
};