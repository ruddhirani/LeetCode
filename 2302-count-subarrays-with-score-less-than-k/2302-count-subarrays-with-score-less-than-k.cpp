class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long curr = 0,res = 0;
        
        for(int j=0,i=0;j<nums.size();j++)
        {
            curr+=nums[j];
            while(curr*(j-i+1) >= k)
                curr-=nums[i++];
            res+=j-i+1;
        }
        return res;
    }
};