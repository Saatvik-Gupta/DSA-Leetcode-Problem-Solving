class Solution {
public:
    int numberOfCuts(int n) {

        if(n==1) return 0;

        if(n%2==0) // even number n=4 cuts=n/2 i.e 2

        return n/2;

        return n; // if n is odd 
        
    }
};