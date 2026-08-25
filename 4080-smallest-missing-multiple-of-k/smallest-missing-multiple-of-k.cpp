class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k;

        while (1) {
            bool found = false;

            for (int x : nums) {
                if (x == ans) {
                    found = true;
                    break;
                }
            }

            if (!found)
                return ans;

            ans += k;
        }
    }
};