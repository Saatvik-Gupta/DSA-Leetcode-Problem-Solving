class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans= 0;
        int ans1=0;

        for(int value : nums){

            ans=( ans ^ value ) & ~ans1; 
            ans1 =( ans1 ^ value ) & ~ans; 
        }

        return ans;
        
    }
};