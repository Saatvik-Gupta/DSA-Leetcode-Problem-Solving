class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {

        int n = score.size();

        set<int> s;
        unordered_map<int, int> mp;

        for (int val : score) {
            s.insert(val); // store unique values in sorted order 1,2,3,4,5
        }

        int rank = n;
        for (int val : s) {
            mp[val] = rank;
            rank--;
        }

        vector<string> ans;

        for (int val : score) {
            if (mp[val] == 1)
                ans.push_back("Gold Medal");
            else if (mp[val] == 2)
                ans.push_back("Silver Medal");
            else if (mp[val] == 3)
                ans.push_back("Bronze Medal");
            else
                ans.push_back(to_string(mp[val]));
        }

        return ans;
    }
};