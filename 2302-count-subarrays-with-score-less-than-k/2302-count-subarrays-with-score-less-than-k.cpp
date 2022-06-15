class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        int n=nums.size();
        int st=0, end=0;
        long sum=0, ans=0;
        while(end<n){
            sum+=nums[end];
            while(sum*(end-st+1)>=k){
                if(nums[st]<k){
                    ans+=(end-st);
                }
                sum-=nums[st];
                st++;
            }
            end++;
        }
        long val=(end-st);
        val=val*(val+1)/2;
        return ans+val;
    }
};