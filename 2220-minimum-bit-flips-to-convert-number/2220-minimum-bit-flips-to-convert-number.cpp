class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xo=start^goal;
        return __builtin_popcount(xo);
    }
};