class Solution {
public:

    int count_digits(int num){
        int count=0;
        while(num!=0){
            count++;
            num/=10;
        }

        return count;
    }
    int findNumbers(vector<int>& nums) {

        int c=0;
        for(int val:nums){
            int cal=count_digits(val);

            if(cal%2==0) // even
            {
                c++;
            }
        }
        return c;
        
    }
};