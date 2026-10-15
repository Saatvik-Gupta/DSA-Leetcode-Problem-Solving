class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> ans;

        for (int val : nums1) {
            freq[val]++;
        }

        for (int val : nums2) {
            if (freq[val] > 0) {
                ans.push_back(val);
                freq[val]--;
            }
        }

        return ans;
    }
};
