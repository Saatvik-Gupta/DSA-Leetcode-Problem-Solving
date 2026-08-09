class Solution {
public:

    int digits_sum(int n){

        int sum=0;

        while( n!=0){
            int rem=n%10;
            sum+=rem;
            n/=10;
        }
        return sum;
    }

    int differenceOfSum(vector<int>& nums) {

        int sum_ele=0;
        int sum_dig=0;
        for(int i=0; i<nums.size();i++){
            sum_ele+=nums[i];
            sum_dig+= digits_sum(nums[i]);
        }

        return abs(sum_ele-sum_dig);
    }
};