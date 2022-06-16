class Solution {
public:
    bool isPowerOfFour(int n) {
        return ( (n==1 || n%10 == 4 || n%10 == 6) && ((n&(n-1))==0) );
    }
};