class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        
        v.push_back(1);
        ans.push_back(v);
        if (numRows == 1) return ans;
        
        v.clear();
        v.push_back(1);
        v.push_back(1);
        ans.push_back(v);
        if (numRows == 2) return ans;
        
        v.clear();
        int nm = 2;
        
        while(nm != numRows){
            v.push_back(1);
            for(int i = 1; i < nm; i++){
                v.push_back(ans[nm-1][i] + ans[nm-1][i-1]);
            }
            v.push_back(1);
            ans.push_back(v);
            v.clear();
            nm++;
        }
        return ans;
        
    }
};