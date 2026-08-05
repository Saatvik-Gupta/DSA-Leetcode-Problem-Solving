class Solution {
public:

    int sum_digits(int num){
        int sum=0;
        while(num>0){
            int digit= num%10;
            sum+=digit;
            num/=10;
        }
        return sum;
    }

    int addDigits(int num) {

        unordered_set<int>s;
        while(num>9 && s.find(num)==s.end()){
            s.insert(num);
            num=sum_digits(num);
        }

            return num;
        

    }
};