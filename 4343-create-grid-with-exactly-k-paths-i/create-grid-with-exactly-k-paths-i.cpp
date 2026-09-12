class Solution {
public:
    vector<string> createGrid(int m, int n, int k) {

        vector<string> grid(m, string(n, '.'));

        auto countPaths = [&](vector<string> &g) {
            vector<vector<long long>> dp(m, vector<long long>(n, 0));

            if (g[m - 1][n - 1] == '#')
                return 0LL;

            dp[m - 1][n - 1] = 1;

            for (int i = m - 1; i >= 0; i--) {
                for (int j = n - 1; j >= 0; j--) {

                    if (g[i][j] == '#') {
                        dp[i][j] = 0;
                        continue;
                    }

                    if (i == m - 1 && j == n - 1)
                        continue;

                    long long ways = 0;

                    if (i + 1 < m)
                        ways += dp[i + 1][j];

                    if (j + 1 < n)
                        ways += dp[i][j + 1];

                    if (ways > (long long)1e18)
                        ways = (long long)1e18;

                    dp[i][j] = ways;
                }
            }

            return dp[0][0];
        };

        if (countPaths(grid) < k)
            return {};

        if (countPaths(grid) == k)
            return grid;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if ((i == 0 && j == 0) || (i == m - 1 && j == n - 1))
                    continue;

                grid[i][j] = '#';

                long long ways = countPaths(grid);

                if (ways < k)
                    grid[i][j] = '.';

                if (ways == k)
                    return grid;
            }
        }

        return {};
    }
};