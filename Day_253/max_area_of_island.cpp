#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    int dfs(vector<vector<int>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == 0)
            return 0;

        grid[r][c] = 0;

        int area = 1;

        area += dfs(grid, r - 1, c);
        area += dfs(grid, r + 1, c);
        area += dfs(grid, r, c - 1);
        area += dfs(grid, r, c + 1);

        return area;
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        rows = grid.size();
        cols = grid[0].size();

        return 0;
    }
};