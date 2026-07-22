class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n>0 && ( n & (n-1) ) ==0) // Number is in the power of two
        {
            return true;
        }
        return false;
        
    }
};