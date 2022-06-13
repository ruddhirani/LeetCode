class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
            return false;
        if(n==1)
            return true;
        if(n%2==0){
            bool small_out=isPowerOfTwo(n/2);
            return small_out;
        }
        else
            return false;
    }
};