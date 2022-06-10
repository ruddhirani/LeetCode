class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int st = 0, end = 0, sol = 0, sum = 0;
        int target = k*threshold;
        while (end<arr.size()) {
            int num = arr[end];
            sum += num;
		
            while (sum > target && end-st+1>k) {
                sum -= arr[st];
                st++;
            }
		
            if (end-st+1==k && sum >= target)
                sol++;
            
            end++;
        }
        return sol;
    }
};