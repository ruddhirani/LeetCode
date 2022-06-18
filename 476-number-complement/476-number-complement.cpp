class Solution {
public:
    int findComplement(int n) {
        vector<int> arr;
        while(n) {
            arr.push_back(n % 2);
            n /= 2;
        }
        int sz = arr.size();
        reverse(arr.begin(), arr.end());
        for(int i = 0; i<sz; ++i) {
              arr[i] = !arr[i];
        }
        long long t = 1;
        for(int i = sz-1; i>=0; --i) {
            n += arr[i] * t;
            t *= 2;
        }
        return n;
    }
};