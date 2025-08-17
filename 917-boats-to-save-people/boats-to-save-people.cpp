class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int i = 0;
        int j = people.size() -1;
        int boatused = 0;
        while(i <= j){
            if(people[i] + people[j] <= limit){
                boatused++;
                i++;
                j--;
            }else{
                boatused++;
                j--;
//moving the heavy weight which couldnt be pair 
//up , hence making the j have an individual boat for themselves 
//since the array is sorted, the heaviest at the last will not pair up with other people as well
            }
        }
        return boatused;
    }
};