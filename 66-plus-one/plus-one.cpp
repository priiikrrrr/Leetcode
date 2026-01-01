class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while(i >= 0){
            if(digits[i] != 9){
                digits[i] = digits[i] + 1;
                return digits;
            }
            digits[i] = 0;
            i--; 
        }
        digits.insert(begin(digits), 1);  //O(n)
        return digits;
    }
};