class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    //as we can rotate 4 times 90 degree and if not same retuning false
    for(int k=0;k<4;k++){
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
        //if mat is coming as target return true
        if(mat==target)
            return true;
    }
        
        return false;
    }
};