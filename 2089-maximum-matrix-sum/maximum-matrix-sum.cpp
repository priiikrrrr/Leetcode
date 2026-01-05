class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long summation = 0;
        long long negativesInGrid = 0;
        long long minieleInGrid = INT_MAX;

        for(int i = 0 ; i < matrix.size() ;  i++){
            for(int j = 0 ; j < matrix[i].size() ; j++){
                summation += abs(matrix[i][j]);
                if(matrix[i][j] < 0)negativesInGrid++;
                if(minieleInGrid > abs(matrix[i][j]))minieleInGrid = abs(matrix[i][j]);
            }
        }
        if(negativesInGrid % 2 == 1){
            //the number of negatives in the given grid is odd 
            //henceforth -> give minus to the mini ele i.e subtract the mini ele from the sum
            summation = summation - 2*minieleInGrid;
        }
        return summation;
    }
};