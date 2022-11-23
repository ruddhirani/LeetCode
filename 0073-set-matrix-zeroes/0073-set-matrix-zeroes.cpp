class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col0=1, row=matrix.size(), col=matrix[0].size();
        // traversing the matrix and updating the values in the 0th row and 0th column with zeros according to the row and column.
        for(int i=0;i<row;i++){
            if(matrix[i][0]==0) col0=0;
            for(int j=1;j<col;j++){
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
       //now we are going to traverse from the end and update the matrix with zeros according to the 0th row and 0th column.
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j]=0;
            }
            if(col0==0)matrix[i][0]=0;
        }
    }
};



//time complexity == 2*(N*M)--- traversing the array twice
//space complexity== O(1)--- no extra space used


/// taking a extra variable and traversing backwards while updating  bcz of maintaining the accuaracy of the 1st index value.