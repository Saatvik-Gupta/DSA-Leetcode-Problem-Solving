class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int left_sum=0;
        int sum=0;

        for(int i=0; i<nums.size();i++){
            sum+=nums[i];
        }

        for(int i=0; i<nums.size();i++){
            int right =sum-left_sum-nums[i];

            if(left_sum==right){
                return i;
            }

            left_sum+=nums[i];
        }
        return -1;
    }
};