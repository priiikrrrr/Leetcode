class Solution {
public:
    int search(vector<int>& v, int target) {
        int n = v.size();
        int low = 0;
        int high = n - 1;
        //if array is of 2 < size 
        if(n==2){
            if(target == v.at(0)) return 0;
            else if(target == v.at(1)) return 1;
            else return -1;
        }
        int pivot = -1; // smallest ele
        // finding pivot
        while (low <= high) {
            int mid = low + ((high - low) / 2);
            //when array size < 2 edge cases : 
            if(mid == 0 ) low = mid + 1;
            else if(mid == n-1) high = mid - 1;
            //to find pivot in general array
            else if (v.at(mid) < v.at(mid + 1) &&
                v.at(mid) < v.at(mid - 1)) { // pivot
                pivot = mid;
                break;
            } else if (v.at(mid) > v.at(mid + 1) &&
                       v.at(mid) >
                           v.at(mid - 1)) { // pivot but the largest element
                pivot = mid + 1;
                break;
            } else if (v.at(mid) > v.at(high))
                low = mid + 1;
            else
                high = mid - 1; // v.at(mid) < v.at(high)
        }
        if (pivot == -1) { // already sorted no rotation i.e k = 0
            low = 0;
            high = n - 1;
            while (low <= high) {
                int mid = low + ((high - low) / 2);
                if (v.at(mid) == target)
                    return mid;
                else if (v.at(mid) > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            return -1;
        }
        // to find target
        //  from pivot - end & from start - pivot are two different searching
        //  area target can be in either of them not both thou
        // therefore, we will start by traversing from 0 to pivot for target and
        // apply bs in that
        //  area; similary we will traverse the other area ; and apply bs to
        //  reduce the search space and avoid O(N)
        if (target >= v.at(0) && target <= v.at(pivot - 1)) {
            low = 0;
            high = pivot - 1;
            while (low <= high) {
                int mid = low + ((high - low) / 2);
                if (v.at(mid) == target)
                    return mid;
                else if (v.at(mid) > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        } else {
            low = pivot;
            high = n - 1;
            // applying bs in the second search area
            while (low <= high) {
                int mid = low + ((high - low) / 2);
                if (v.at(mid) == target)
                    return mid;
                else if (v.at(mid) > target)
                    high = mid - 1;
                else
                    low = mid + 1;
            }
        }
        return -1;
    }
};