class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {

        int n=nums.size();
        vector<int>freq(n+1,0);
        vector<int>ans(2);

        for(int val:nums){
            freq[val]++;
        }

        for(int i=1; i<=n; i++){
            if(freq[i]==2)// Duplicate number
            {
                ans[0]=i;
            }
            else if(freq[i]==0) ans[1]=i; // Missing number
        }
            return ans;

    }
};