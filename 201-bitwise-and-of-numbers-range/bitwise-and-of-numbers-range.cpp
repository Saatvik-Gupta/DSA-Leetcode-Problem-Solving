class Solution {
public:
    int rangeBitwiseAnd(int first, int last) {

        int shift=0;
        
        while(first!=last){

            first=first>>1; // right shift
            last>>=1;
            shift++;
        }

        return first<<shift;
    }
};