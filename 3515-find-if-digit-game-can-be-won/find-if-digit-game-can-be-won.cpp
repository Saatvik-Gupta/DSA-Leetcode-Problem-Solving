class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        int single_sum=0;
        int double_sum=0;

        for(int val:nums){
            
            if(val>0 && val<=9) single_sum+=val;

            else if( val>=10 && val<=99) double_sum+=val;
        }
       
        if (double_sum!=single_sum) return true;
        
        return false;
        
    }
};