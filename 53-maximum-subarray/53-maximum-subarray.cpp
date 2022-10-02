#include<bits/stdc++.h>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //initiating values
        int sum=0;
        int max_sum=INT_MIN;
        for(auto it: nums){
            sum+=it;
            //storing max sum value
            max_sum=max(sum,max_sum);
            //as we need the maximum sum of the calculating sum as long as it is positive or else making it zero.
            if(sum<0) sum=0;
        }
        return max_sum;
    }
};