class Solution {
public:
    int subtractProductAndSum(int num) {

        int digit;
        int sum=0,pro=1;

        while(num!=0){
            digit=num%10;

            sum+=digit;
            pro*=digit;
            num=num/10;
        }

        return (pro-sum);
        
    }
};