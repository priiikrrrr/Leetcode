class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() < 2) return nums.size();
        unordered_set<int>st;
        for(int number : nums)st.insert(number);

        int sequence = 0;
        for(int number : st){
            //if the prev ele of the number selected does not exist : the start of new sequence
            if(st.find(number - 1) == st.end()){
                int curr = number;
                int currreq = 1;
                //as long as we keep finding the next number to the curr ele , we keep inc the curr sequence 
                // and replace the curr number with that number
                while(st.find(curr + 1) != st.end()){
                    curr++;
                    currreq++;
                }
                sequence = max(sequence , currreq);
            }else{
                continue;
            }
        }
    return sequence;
    }
};