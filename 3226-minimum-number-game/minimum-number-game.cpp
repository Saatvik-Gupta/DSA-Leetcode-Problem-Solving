class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        int n=nums.size();
        vector<int>ans;

        while(!nums.empty()){

            int alice=*min_element(nums.begin(),nums.end());
            nums.erase(find(nums.begin(),nums.end(),alice));

            int bob=*min_element(nums.begin(),nums.end());
            nums.erase(find(nums.begin(),nums.end(),bob));

            ans.push_back(bob);
            ans.push_back(alice);

        }
        return ans;
        
    }
};