class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // int count = 0;
        // int sum = 0;
        // for (int i = 0; i < people.size() ; i++) {
        //     if(sum <= limit)sum += people[i];
        // }
        // return count;

//non desc array
        sort(people.begin(), people.end());
        
        int i = 0 ; int j = people.size() - 1;
        int boats = 0;
        while(i <= j){
            int sum = people[i] + people[j];
            if(sum <= limit){
                boats++;
                i++;
                j--;
            }else{
                //limit crossed
                boats++;
                j--;

            } 
        }
        return boats;
    }
};