class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;
        while (i < j) {
            int found= numbers[i] + numbers[j];

            if(found == target)return {i+ 1, j +1};
            else if(found > target)j--;
            else i++;
        }
        return {-1, -1};
    }
};