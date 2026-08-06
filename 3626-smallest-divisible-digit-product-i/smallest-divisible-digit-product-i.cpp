class Solution {
public:

    int digits_product(int n){
        int pro=1;
        while(n>0){
            int rem=n%10;
            pro*=rem;
            n/=10;
        }
        return pro;
    }
    int smallestNumber(int n, int t) {

        while(1){
            if(digits_product(n) % t==0){
                return n;  
            }
            n++;
        }
        
    }
};