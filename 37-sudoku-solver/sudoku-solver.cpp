class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int row, int col, int num){
        //checking for each row
        for(int i = 0 ; i < 9 ; i++){
            if(board[row][i] - '0' == num) return false;
        }
        //checking for each col --> row will change col same rahega
        for(int j = 0 ; j < 9 ; j++){
            if(board[j][col] - '0' == num) return false;
        }
        //the big row-col in the board can be observed as 
        //the boards 3row make it -> big row i.e row/3 -> which bigrow we at
        //row/r*3 and col/3*3 gives that big row-col's first row/col 
        int x = (row/3)*3;
        int y = (col/3)*3;

        for(int i = x ; i < (x+3) ; i++){
            for(int j = y ; j < (y + 3) ; j++){
                if(board[i][j] -'0' == num) return false;
            }
        }
        return true;
    }
    bool sudoku(vector<vector<char>>& board,int row, int col){
        if(row == 9) return true;
        if(col == 9) return sudoku(board, row+1 ,0);
        if(board[row][col] != '.') return sudoku(board, row , col+1);
        for(int j = 1; j <= 9 ; j++){
            if(isSafe(board, row, col , j)){
                board[row][col] = '0' + j;

                bool retVal = sudoku(board,row,col+1);
                if(retVal) return true;
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board , 0 , 0);
    }
};