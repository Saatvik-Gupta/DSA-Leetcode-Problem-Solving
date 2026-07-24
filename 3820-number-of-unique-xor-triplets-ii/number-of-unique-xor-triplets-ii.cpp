class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {

        unordered_set<int> pairXor;
        unordered_set<int> ans;

        int n = nums.size();

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                pairXor.insert(nums[i] ^ nums[j]);
            }
        }

        for(int x : pairXor) {
            for(int num : nums) {
                ans.insert(x ^ num);
            }
        }

        // Covers n = 1 and n = 2 as well
        for(int num : nums)
            ans.insert(num);

        return ans.size();
    }
};