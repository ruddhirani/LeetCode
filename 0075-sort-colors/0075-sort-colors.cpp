class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int temp,i,j;
    //     for(int i=0; i<nums.size(); i++){
    //         for(j=i+1; j<nums.size(); j++){
    //             if(nums[i]>nums[j])
    //             {
    //                 temp = nums[i];
    //                 nums[i] = nums[j];
    //                 nums[j] = temp;
    //             }
    //         }
    //     }
    // }
        int l=0,mid=0,r=nums.size()-1;
        while(mid<=r)
        {
            if(nums[mid]==1) mid++;
            else if(nums[mid]==0) 
            {
                swap(nums[mid],nums[l]);
                l++;mid++;
            }
            else 
            {
                swap(nums[mid],nums[r]);
                r--;           
            } 
        }
    }
};