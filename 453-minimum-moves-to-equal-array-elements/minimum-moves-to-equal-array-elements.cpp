class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());

        int moves = 0;

        for(int i = 0; i < nums.size(); i++) { // [1,2,3]
            moves += nums[i] - mini; // 0+=nums[0]-mini--> 0+1-1=0
            // 0+=nums[1]-1--> 0+2-1==>1
            // 1+=nums[2]-1--> 1+3-1==>3
        }

        return moves;
    }
};
