class Solution {
public:

    void allpermu(vector<int>& nums,int n,int idx,vector<vector<int>>& ans){
        if(idx==n){
            ans.push_back({nums});
            return;
        }
        for(int j=idx; j<n; j++){
            swap(nums[j],nums[idx]);
            allpermu(nums,n,idx+1,ans);
            swap(nums[j],nums[idx]); // backtrack
        }

    }

    vector<vector<int>> permute(vector<int>& nums) {

        int n=nums.size();
        vector<vector<int>>ans;
        allpermu(nums,n,0,ans);

        return ans;
        
    }
};