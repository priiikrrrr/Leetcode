class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result(numRows);
        for(int i = 0 ; i < numRows ; i++){
            result[i] = vector<int>(i+1, 1);
            for(int j = 1 ; j < i ; j++){
                // if(j == 0 || j == i)ans.push_back(1);
                result[i][j] = result[i-1][j]+result[i-1][j-1];
            }
        }
        return result;
//TC -> numrows*numrows
    }
};