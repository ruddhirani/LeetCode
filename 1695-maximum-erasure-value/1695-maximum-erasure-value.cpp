class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> mp;
        
        int n = nums.size(), st = 0, end = 0, sol =0,sum=0;
        
        while(end < n){ 
            sum+=nums[end];
            mp[nums[end]]++; 
            while(mp[nums[end]] != 1){
                mp[nums[st]]--;
                sum-=nums[st];
                st++;
            }  
            end++; 
            sol = max(sol, sum);                  
        }
        
        return sol;
    }
};