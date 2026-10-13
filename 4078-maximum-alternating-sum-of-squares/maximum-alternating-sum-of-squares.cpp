class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> squares;

        for (int x : nums) { // storing squares
            squares.push_back(1LL * x * x);
        }

        sort(squares.begin(), squares.end()); // sorting them

        int n = squares.size();
        long long score = 0;

        for (int i = 0; i < n; i++) {
            if (i <n/2)
                score -= squares[i];
            else
                score += squares[i];
        }

        return score;
    }
};