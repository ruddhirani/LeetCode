class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int> mp;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[i]==1) sum+=i;
        }
        return sum;
    }
};