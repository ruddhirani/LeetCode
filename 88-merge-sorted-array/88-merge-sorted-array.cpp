class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        //first adding all the elements of second array into first array
        for(int i=m;i<nums1.size();i++,j++){
            nums1[i]+=nums2[j];
        }
        //sort the merged array
        sort(nums1.begin(),nums1.end());
    }
};