class Solution {
public:
    int n, m;
    const int mod = 1e9 + 7;

    pair<long long, long long>
    dfs(int i, int j, vector<vector<int>>& grid,
        vector<vector<pair<long long, long long>>>& dp,
        vector<vector<int>>& vis) {

        if (i == n - 1 && j == m - 1) {
            return {grid[i][j], grid[i][j]};
        }

        if (vis[i][j])
            return dp[i][j];

        long long mx = LLONG_MIN, mn = LLONG_MAX;

        if (i + 1 < n) {
            auto down = dfs(i + 1, j, grid, dp, vis);
            long long a = down.first * grid[i][j];
            long long b = down.second * grid[i][j];
            mx = max({mx, a, b});
            mn = min({mn, a, b});
        }

        if (j + 1 < m) {
            auto right = dfs(i, j + 1, grid, dp, vis);
            long long a = right.first * grid[i][j];
            long long b = right.second * grid[i][j];
            mx = max({mx, a, b});
            mn = min({mn, a, b});
        }

        vis[i][j] = 1;
        return dp[i][j] = {mx, mn};
    }

    int maxProductPath(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();

        vector<vector<pair<long long, long long>>> dp(
            n, vector<pair<long long, long long>>(m));
        vector<vector<int>> vis(n, vector<int>(m, 0));

        auto res = dfs(0, 0, grid, dp, vis);

        if (res.first < 0)
            return -1;
        return res.first % mod;
    }
};