class Solution {
public:

    void Subsets(vector<int>& nums,vector<int>& ans,int idx,vector<vector<int>>& allsubsets){

    sort(nums.begin(),nums.end());
    // Base condition
    if(idx==nums.size()){

        allsubsets.push_back({ans});
        return;

    }

    // inclusion
    ans.push_back(nums[idx]);
    Subsets(nums,ans,idx+1,allsubsets);

    ans.pop_back(); // backtracking

    int i=idx+1;
    while(i<nums.size() && nums[i]==nums[i-1]) i++;
    Subsets(nums,ans,i,allsubsets);
}

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<int> ans;
        vector<vector<int>>allsubsets;

        Subsets(nums,ans,0,allsubsets);

        return allsubsets;
        
    }
};