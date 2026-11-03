class Solution {
public:
    int minMoves(vector<int>& nums) {

        int ans=0;

        int mini= *max_element(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            
            int moves= abs(nums[i] - mini);
            ans+=moves;
        }

        return ans;
        
    }
};