class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        //if color of ic & fc is same then we do not need to do anything, return as it is.
        if(color == image[sr][sc])return image;
        dfs(image, sr, sc, image[sr][sc], color);
        return image;
    }
    void dfs(vector<vector<int>>&image, int row, int col , int ic , int nc){
        //ic - initial color
        //nc - new color 
        int n = image.size(); //row
        int m = image[0].size(); //column
        if(row < 0 || col < 0 || row >= n || col >= m){
            //outside grid
            return;
        }
        //if the cell color is not same as initial color 
        if(image[row][col] != ic)return;
        //before moving forward, paint with the new color required for the valid cell we are at
        image[row][col] = nc;
        dfs(image, row+1, col , ic, nc);//downward
        dfs(image, row, col - 1 , ic, nc);//leftward
        dfs(image, row - 1, col , ic, nc);//upward
        dfs(image, row, col + 1 , ic, nc);//rightward
    }
};