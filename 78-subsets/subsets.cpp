class Solution {
public:

    void Subsets(vector<int>& nums,vector<int>& ans,int idx,vector<vector<int>>& allsubsets){

    // Base condition
    if(idx==nums.size()){

        allsubsets.push_back({ans});
        return;

    }

    // inclusion
    ans.push_back(nums[idx]);
    Subsets(nums,ans,idx+1,allsubsets);

    ans.pop_back(); // backtracking

    // exclusion
    Subsets(nums,ans,idx+1,allsubsets);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>>allsubsets;

        Subsets(nums,ans,0,allsubsets);

        return allsubsets;
        
    }
};