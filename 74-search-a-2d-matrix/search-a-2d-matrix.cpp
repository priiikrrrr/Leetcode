class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
//More optimized would be the one where we have constant space also -- referred solution
        int low = 0;
        int high = col*row - 1;
        
        while(low <= high){
            int mid = low + ((high - low)/2);
            
            if(matrix[mid/col][mid%col] == target) return true;
            else if(matrix[mid/col][mid%col] > target) high = mid  - 1;
            else low = mid + 1;
        }
        return false;
         


        /*
        //brute force with extra space of O(row*col)
                vector<int>v(row*col,0);
                int k = 0;
                //making a new array where we are decolumising the 2d matrix
                //adding all the elements in row form and applying binary search
                for(int i = 0; i < row ; i++){
                    for(int j = 0; j < col ; j++){

                        v[k++] = matrix[i][j];
                    }
                }
                int low = 0 ;
                int high = row*col - 1;
                while(low <= high){
                    int mid = low + ((high - low)/2);
                    if(v.at(mid) == target) return true;
                    else if(v.at(mid) > target) high = mid - 1;
                    else low = mid + 1;
                }
                return false; */
    }
};