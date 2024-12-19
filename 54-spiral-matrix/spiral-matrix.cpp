class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size(); 
    int minrow = 0; 
    int maxrow = m-1;
    int mincol = 0;
    int maxcol = n-1;
    vector<int>v;
    // int totalElements = 0;
    //by observation -> we are traversing the matrice in RIGHT DOWN LEFT UP way.

while(minrow <= maxrow && mincol <= maxcol){

    //Right -> row is same colum  is inc 
    for(int j = mincol ; j <= maxcol ; j++){
        v.push_back(matrix[minrow][j]);
        // totalElements++;
    }
    minrow++;
    if(minrow > maxrow || mincol > maxcol) break;
    //Down -> column is same row is inc
    for(int i = minrow ; i <= maxrow ; i++){
        v.push_back(matrix[i][maxcol]);
        // totalElements++;
    }
    maxcol--;
    if(minrow > maxrow || mincol > maxcol) break;
    //Left -> row is same column is dec 
    for(int j = maxcol ; j >= mincol ; j--){
        v.push_back(matrix[maxrow][j]);
        // totalElements++;
    }
    maxrow--;
    if(minrow > maxrow || mincol > maxcol) break;
    //Up -> column is same row is dec
    for(int i = maxrow ; i >= minrow ; i--){
        v.push_back(matrix[i][mincol]);
        // totalElements++;
    }
    mincol++;
    }
    return v;
    }  
};