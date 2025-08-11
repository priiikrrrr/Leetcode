class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score = 0;// since o/p is asked in LL
        priority_queue<int>pq;
        for(int i = 0 ; i < nums.size() ; i++){
            pq.push(nums[i]);
            // score += nums[i];
        }
        for(int i = 0 ; i < k ; i++){
            int top = pq.top();
            pq.pop();
            // int newele = ceil(top/3) -> causing error because int type division never makes the ceil actually work since for any decimal value 
//because of int type division is converted to int beforehand making ceil never play its role hence never reaching the upper value 
//therefore, changing it to double for division and then converting back to int before pushing back to heap;
            double newele = ceil((double)top/3);
            score += top;
            top = (int)newele;
            pq.push(top);
        }
        return score;
    }
};