class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int temp=x;

        if(x<0){
            return false;
        }

        while(temp!=0){
            int dig=temp%10;

            if(rev > INT_MAX/10 || (rev== INT_MAX/10 && dig>7)){
                return false;
            }
            // if(rev < INT_MIN/10 || (rev== INT_MIN/10 && dig < -8)){
            //     return false;    Extra as alraedy checked for negative
            // }
        rev=(rev*10)+ dig;
        temp/=10;
    }

        if(rev==x){
            return true;
        }
        return false;
        
    }
};