class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=nums[0],m=0;
        for(int i=0;i<nums.size();i++){
            m+=nums[i];
            if(res<m)
                res=m;
            if(m<0)
                m=0;
        }
        return res;
    }
};