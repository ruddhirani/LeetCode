class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n=mat.size();
        //take the transpose of the matrix
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        // reverse each row after the transpose
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(),mat[i].end());
        }
    }
};