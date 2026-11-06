#include <vector>
using namespace std;

class Solution {
    int rows, cols;

    void dfs(vector<vector<char>>& grid, int r, int c) {
        if (r < 0 || c < 0 || r >= rows || c >= cols ||
            grid[r][c] == '0')
            return;

        grid[r][c] = '0';

        dfs(grid, r - 1, c);
        dfs(grid, r + 1, c);
        dfs(grid, r, c - 1);
        dfs(grid, r, c + 1);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty())
            return 0;

        rows = grid.size();
        cols = grid[0].size();

        int count = 0;

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == '1') {
                    count++;
                    dfs(grid, r, c);
                }
            }
        }

        return count;
    }
};