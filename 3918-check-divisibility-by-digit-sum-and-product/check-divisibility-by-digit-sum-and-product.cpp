class Solution {
public:

    int digit_sum(int n){
        int sum=0;

        while(n!=0){
            sum+= n%10;
            n/=10;
        }
        return sum;
    }

    int digit_pro(int n){
    int pro=1;

    while(n!=0){
        pro*= n%10;
        n/=10;
    }
    return pro;
    }

    bool checkDivisibility(int n) {

        int sum= digit_sum(n) + digit_pro(n);
        if(n% sum ==0) return true;

        return false;
        
    }
};