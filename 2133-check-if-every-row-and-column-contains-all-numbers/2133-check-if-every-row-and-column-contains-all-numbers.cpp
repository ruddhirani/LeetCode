class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
         map<int,int>m1,m2;
  
        for(int i=0;i<matrix.size();i++)
      {
  
        for(int j=0;j<matrix[0].size();j++)
        {
          if(m1.find(matrix[i][j])!=m1.end()) return false;
          else m1[matrix[i][j]]++;
          
          if(m2.find(matrix[j][i])!=m2.end()) return false;
          else m2[matrix[j][i]]++;
         
        }
          m1.clear();
          m2.clear();
      }
      
     return true;
    }
};