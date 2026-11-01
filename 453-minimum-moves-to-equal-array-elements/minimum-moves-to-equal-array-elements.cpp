class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());

        int moves = 0;

        for(int i = 0; i < nums.size(); i++) { // [1,2,3]
            moves += nums[i] - mini;
        }

        return moves;
    }
};
