class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i,j;
        vector<int>res;
        i=0;
        j=num.size()-1;
            while(i<j){
                if(num[i]+num[j]==target){
                res.push_back(i+1);
                res.push_back(j+1);
                    break;
              }
                else if(num[i]+num[j]>target)
                    j--;
                else
                    i++;
        }
        return res;
    }
};