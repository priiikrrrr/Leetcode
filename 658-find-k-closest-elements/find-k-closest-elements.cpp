class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//T.C -> O(KlogK + logN) S.C -> O(K)
        int n = arr.size();
        vector<int> v(k);
        //case 5
        if(x < arr[0]){
            for(int i = 0; i < k ; i++){
                v[i] = arr[i];
            }
            return v;
        }
        if(x > arr[n-1]){
            int i = n - 1;
            int j = k - 1; //to add element in the sorted format only 
            while(j >= 0){
                v[j] = arr[i];
                i--;
                j--;
            }
            return v;
        }

        int low = 0;
        int high = n - 1;
        bool found = false; // if x is present or not
        int id = 0; // traversing on new array's index
        int mid = -1;
        //rest of the cases
        // if x is present apply BS
        while (low <= high) {
            mid = low + ((high - low) / 2);

            if (arr.at(mid) == x) {
                found = true; //x present
                // v.push_back(arr.at(mid));
                v[id] = arr[mid];
                id++;
                break;
            } 
            else if (arr.at(mid) > x)
                high = mid - 1;
            else
                low = mid + 1;
            
        }
        int lowerbound = high;
        int upperbound = low;
        if(found == true){
            lowerbound = mid - 1;
            upperbound = mid + 1;
        }
        while((id < k )&&(lowerbound >= 0) && (upperbound <= n-1)){
            // d1 = x - lowerbound d2 = x - upperbound
            int d1 = abs(x - arr[lowerbound]);
            int d2 = abs(x - arr[upperbound]);

           if(d1 <= d2){
            v[id] = arr[lowerbound];
            // id++;
            lowerbound--;
           } 
           else{ // d1 < d2
            v[id] = arr[upperbound];
            // id++;
            upperbound++; 
           }
           id++;
        }
        if(lowerbound < 0){
            while(id < k){
                v[id] = arr[upperbound];
                upperbound++;
                id++;
            }
        }
        if(upperbound > n - 1){
            while(id < k){
                v[id] = arr[lowerbound];
                lowerbound--;
                id++;
            }
        }
        sort(v.begin(),v.end()); // O(K logK)
        return v;
        /*
         x -> taregt ; k -> number to be returned around closest to
         target  {vector<int>v(k)}
         two pointer + lower/upper bound approach

        case 1: if x is present ; add it in new vector ; lb on x-1 & ub on x+1
        case 2: if x is not present &k = 2 ; wont be added in new vector ; but
        by the concept of lb/ub we will still find lb & ub by the end of the
        vector

        :: compare which ever element is smaller to be added first if the
        mod/distance is same

        case 3: if x is not present & k > 2 ;
        case 4: if x = 3 & k = 5 in array -> 1,3,5,7,9,11

        in both of the case -> lb/ub will go out of bound ; once it goes out of
        bound we dont need to check the other pointer ; just pick whichever
        element comes next and add it in the new array till the condition of k
        is fulfilled

        case 5: if x is < arr[0]  then starting key k elements ko push kardo OR
        > arr[n-1] traverse from last and add k elements from there
        */
    }
};