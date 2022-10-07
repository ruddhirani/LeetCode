class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n= matrix.size();   //no. of row
        int m=matrix[0].size();  // no. of column
        
        //imaginary alloting index
        int low=0;
        int high= (n*m)-1;
        
        //applying binary search on the whole matrix
        while(low<=high){
            int mid= ((low+high)/2);
            if(matrix[mid/m][mid%m]==target)
                return true;
            else if(matrix[mid/m][mid%m]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};