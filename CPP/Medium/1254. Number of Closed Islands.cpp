// Problem Link
// https://leetcode.com/problems/number-of-closed-islands/

// Solution:
class Solution {
public:
    void dfs(vector<vector<int>> &grid, int n, int m, int r, int c, int &fl) {
        if(r < 0 || c >= m || r >= n || c < 0 || grid[r][c] == 1) return;
        if(r == 0 || c == 0 || r == n-1 || c == m-1) fl = 1;
        grid[r][c] = 1;
        dfs(grid, n, m , r+1, c, fl);
        dfs(grid, n, m , r-1, c, fl);
        dfs(grid, n, m , r, c+1, fl);
        dfs(grid, n, m , r, c-1, fl);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), count = 0;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    int fl = 0;
                    dfs(grid, n, m, i, j, fl);
                    if(!fl) count++;
                }
            }
        }
        return count;
    }
};