class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int soln=0;
        for(int val : nums){
            soln=soln^val;
        }

        return soln;
        
    }
};