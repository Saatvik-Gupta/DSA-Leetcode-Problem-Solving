class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        int n=nums.size();
        int maxi=0;
        int left=0;

        unordered_map<int,int>freq;

        for(int i=0; i<n ;i++){
            freq[nums[i]]++;

            while(freq[nums[i]]>k){
                freq[nums[left]]--;
                left++;
            }

            maxi=max(maxi,i-left+1);
        }
        return maxi;
        
    }
};