class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        vector<int>freq(nums.size()+1,0);

        for(int val:nums){

            if(val>0 && val<=nums.size()){
                freq[val]=1;
            }
        }

        for(int i=1;i<=nums.size();i++){

            if(freq[i]==0){
                return i;
            }
        }

        return nums.size()+1;
        
    }
};