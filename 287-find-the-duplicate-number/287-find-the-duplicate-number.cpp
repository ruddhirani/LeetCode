class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //intiating with starting value
        int sl=nums[0];
        int ft=nums[0];
        
        //moving the slow pointer by 1step and fast by 2step for the first collision
        do{
            sl=nums[sl];
            ft=nums[nums[ft]];
            
        }while(sl!=ft);
        
        //intiating fast for 2nd collison
        ft=nums[0];
        
        //moving both the pointers by 1 step for the second collison 
        // that will be the duplicate
        while(sl!=ft){
            sl=nums[sl];
            ft=nums[ft];
        }
        
        return ft;
    }
};