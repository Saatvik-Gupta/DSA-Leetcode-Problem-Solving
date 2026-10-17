class Solution {
public:
int square(int n){
    return n*n;
}
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int>ans;

        for(int val:nums){
            ans.push_back(square(val));
        }

        sort(ans.begin(),ans.end());

        return ans;
        
    }
};