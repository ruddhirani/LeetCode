class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //created a 2d vector intiating size of number of rows
        vector<vector<int>> pas(numRows);
        int i,j;
        for(i=0;i<numRows;i++){
            //making columns of size n+1
            pas[i].resize(i+1);
            //putting 1 at the start and end of the row
            pas[i][0]=pas[i][i]=1;
            
            //filling the rest of the pattern with adding the elements of previous row
            for(j=1;j<i;j++){
                pas[i][j]=pas[i-1][j-1]+pas[i-1][j];
            }
        }
        return pas;
    }
};