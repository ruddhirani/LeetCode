class Solution {
public:
    int singleNumber(vector<int>& nums) {
         if(nums.size() == 1) return nums[0];
        
        sort(nums.begin(), nums.end());
        int i=0;
        while(i < nums.size()) {
            if(nums[i] != nums[i + 1]) 
                return nums[i];
            i=i+2;
        }
        
        return nums[nums.size() - 1];
    }
};