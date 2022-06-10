class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int st=0, end=0;
        int n=nums.size();
        double sol=INT_MIN;
        double sum=0.0;
        while(end<n)
        {

            sum=sum+nums[end];
        if(end-st+1==k)
        {
            sol=max(sum/(double)k,sol);
            sum=sum-nums[st];
            st++;
        }
          end++;

        }   
        
        return sol;
    }
};