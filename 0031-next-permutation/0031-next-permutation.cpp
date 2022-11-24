class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),k,l;
        //traversing backward and doing changes according to the condition in the below if and finding k
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        //it means it is the last number and the next permutation will be the very first number so we r just reversing the last number and getting the desired number
        if(k<0)
            reverse(nums.begin(),nums.end());
        //we r finding l such that the number is just greater than the number at k
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k])
                    break;
            }
            //swapping numbers at l and k
            swap(nums[k],nums[l]);
            //reversing the increasing sequence just after the k to get the most near next permutation
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};